<template>
  <section class="panel-52673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52673");
const base = ref(52673);
const total = computed(() => base.value * 2);

function incrementar52673() {
  base.value++;
}
</script>
