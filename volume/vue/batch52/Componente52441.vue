<template>
  <section class="panel-52441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52441");
const base = ref(52441);
const total = computed(() => base.value * 2);

function incrementar52441() {
  base.value++;
}
</script>
