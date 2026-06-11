<template>
  <section class="panel-52093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52093");
const base = ref(52093);
const total = computed(() => base.value * 2);

function incrementar52093() {
  base.value++;
}
</script>
