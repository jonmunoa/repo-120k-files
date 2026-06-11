<template>
  <section class="panel-5565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5565");
const base = ref(5565);
const total = computed(() => base.value * 2);

function incrementar5565() {
  base.value++;
}
</script>
