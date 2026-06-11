<template>
  <section class="panel-38717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38717");
const base = ref(38717);
const total = computed(() => base.value * 2);

function incrementar38717() {
  base.value++;
}
</script>
