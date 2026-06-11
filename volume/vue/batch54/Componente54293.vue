<template>
  <section class="panel-54293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54293");
const base = ref(54293);
const total = computed(() => base.value * 2);

function incrementar54293() {
  base.value++;
}
</script>
