<template>
  <section class="panel-10913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10913");
const base = ref(10913);
const total = computed(() => base.value * 2);

function incrementar10913() {
  base.value++;
}
</script>
