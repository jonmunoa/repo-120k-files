<template>
  <section class="panel-44921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44921");
const base = ref(44921);
const total = computed(() => base.value * 2);

function incrementar44921() {
  base.value++;
}
</script>
