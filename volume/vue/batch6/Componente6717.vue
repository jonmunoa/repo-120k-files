<template>
  <section class="panel-6717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6717");
const base = ref(6717);
const total = computed(() => base.value * 2);

function incrementar6717() {
  base.value++;
}
</script>
