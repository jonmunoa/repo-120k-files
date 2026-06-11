<template>
  <section class="panel-25333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25333");
const base = ref(25333);
const total = computed(() => base.value * 2);

function incrementar25333() {
  base.value++;
}
</script>
