<template>
  <section class="panel-27201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27201");
const base = ref(27201);
const total = computed(() => base.value * 2);

function incrementar27201() {
  base.value++;
}
</script>
