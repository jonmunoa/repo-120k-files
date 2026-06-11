<template>
  <section class="panel-40201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40201");
const base = ref(40201);
const total = computed(() => base.value * 2);

function incrementar40201() {
  base.value++;
}
</script>
