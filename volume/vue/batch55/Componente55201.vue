<template>
  <section class="panel-55201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55201");
const base = ref(55201);
const total = computed(() => base.value * 2);

function incrementar55201() {
  base.value++;
}
</script>
