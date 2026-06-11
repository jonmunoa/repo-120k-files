<template>
  <section class="panel-19381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19381");
const base = ref(19381);
const total = computed(() => base.value * 2);

function incrementar19381() {
  base.value++;
}
</script>
