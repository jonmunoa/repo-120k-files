<template>
  <section class="panel-25801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25801");
const base = ref(25801);
const total = computed(() => base.value * 2);

function incrementar25801() {
  base.value++;
}
</script>
