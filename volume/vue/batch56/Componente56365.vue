<template>
  <section class="panel-56365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56365");
const base = ref(56365);
const total = computed(() => base.value * 2);

function incrementar56365() {
  base.value++;
}
</script>
