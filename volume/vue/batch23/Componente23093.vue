<template>
  <section class="panel-23093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23093");
const base = ref(23093);
const total = computed(() => base.value * 2);

function incrementar23093() {
  base.value++;
}
</script>
