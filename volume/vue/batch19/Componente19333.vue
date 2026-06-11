<template>
  <section class="panel-19333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19333");
const base = ref(19333);
const total = computed(() => base.value * 2);

function incrementar19333() {
  base.value++;
}
</script>
