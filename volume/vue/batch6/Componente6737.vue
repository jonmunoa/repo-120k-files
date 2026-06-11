<template>
  <section class="panel-6737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6737");
const base = ref(6737);
const total = computed(() => base.value * 2);

function incrementar6737() {
  base.value++;
}
</script>
