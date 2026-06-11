<template>
  <section class="panel-53365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53365");
const base = ref(53365);
const total = computed(() => base.value * 2);

function incrementar53365() {
  base.value++;
}
</script>
