<template>
  <section class="panel-52637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52637");
const base = ref(52637);
const total = computed(() => base.value * 2);

function incrementar52637() {
  base.value++;
}
</script>
