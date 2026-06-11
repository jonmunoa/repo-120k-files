<template>
  <section class="panel-15489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15489");
const base = ref(15489);
const total = computed(() => base.value * 2);

function incrementar15489() {
  base.value++;
}
</script>
