<template>
  <section class="panel-4717">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4717");
const base = ref(4717);
const total = computed(() => base.value * 2);

function incrementar4717() {
  base.value++;
}
</script>
