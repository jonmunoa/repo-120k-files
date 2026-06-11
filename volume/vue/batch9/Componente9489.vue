<template>
  <section class="panel-9489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9489");
const base = ref(9489);
const total = computed(() => base.value * 2);

function incrementar9489() {
  base.value++;
}
</script>
