<template>
  <section class="panel-30085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30085");
const base = ref(30085);
const total = computed(() => base.value * 2);

function incrementar30085() {
  base.value++;
}
</script>
