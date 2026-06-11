<template>
  <section class="panel-41201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41201");
const base = ref(41201);
const total = computed(() => base.value * 2);

function incrementar41201() {
  base.value++;
}
</script>
