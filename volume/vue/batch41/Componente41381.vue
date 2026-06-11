<template>
  <section class="panel-41381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41381");
const base = ref(41381);
const total = computed(() => base.value * 2);

function incrementar41381() {
  base.value++;
}
</script>
