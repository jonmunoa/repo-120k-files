<template>
  <section class="panel-31093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31093");
const base = ref(31093);
const total = computed(() => base.value * 2);

function incrementar31093() {
  base.value++;
}
</script>
