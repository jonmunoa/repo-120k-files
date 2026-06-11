<template>
  <section class="panel-12201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12201");
const base = ref(12201);
const total = computed(() => base.value * 2);

function incrementar12201() {
  base.value++;
}
</script>
