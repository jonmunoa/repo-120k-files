<template>
  <section class="panel-53169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53169");
const base = ref(53169);
const total = computed(() => base.value * 2);

function incrementar53169() {
  base.value++;
}
</script>
