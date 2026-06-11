<template>
  <section class="panel-37801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37801");
const base = ref(37801);
const total = computed(() => base.value * 2);

function incrementar37801() {
  base.value++;
}
</script>
