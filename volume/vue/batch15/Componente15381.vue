<template>
  <section class="panel-15381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15381");
const base = ref(15381);
const total = computed(() => base.value * 2);

function incrementar15381() {
  base.value++;
}
</script>
