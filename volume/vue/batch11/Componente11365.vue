<template>
  <section class="panel-11365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11365");
const base = ref(11365);
const total = computed(() => base.value * 2);

function incrementar11365() {
  base.value++;
}
</script>
