<template>
  <section class="panel-32441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32441");
const base = ref(32441);
const total = computed(() => base.value * 2);

function incrementar32441() {
  base.value++;
}
</script>
