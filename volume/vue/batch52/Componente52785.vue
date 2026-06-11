<template>
  <section class="panel-52785">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52785");
const base = ref(52785);
const total = computed(() => base.value * 2);

function incrementar52785() {
  base.value++;
}
</script>
