<template>
  <section class="panel-21197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21197");
const base = ref(21197);
const total = computed(() => base.value * 2);

function incrementar21197() {
  base.value++;
}
</script>
