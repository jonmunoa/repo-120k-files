<template>
  <section class="panel-3825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3825");
const base = ref(3825);
const total = computed(() => base.value * 2);

function incrementar3825() {
  base.value++;
}
</script>
