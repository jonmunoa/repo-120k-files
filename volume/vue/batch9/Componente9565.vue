<template>
  <section class="panel-9565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9565");
const base = ref(9565);
const total = computed(() => base.value * 2);

function incrementar9565() {
  base.value++;
}
</script>
