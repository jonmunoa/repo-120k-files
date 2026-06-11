<template>
  <section class="panel-5825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5825");
const base = ref(5825);
const total = computed(() => base.value * 2);

function incrementar5825() {
  base.value++;
}
</script>
