<template>
  <section class="panel-53837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53837");
const base = ref(53837);
const total = computed(() => base.value * 2);

function incrementar53837() {
  base.value++;
}
</script>
