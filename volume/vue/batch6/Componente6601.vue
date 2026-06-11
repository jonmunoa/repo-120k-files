<template>
  <section class="panel-6601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6601");
const base = ref(6601);
const total = computed(() => base.value * 2);

function incrementar6601() {
  base.value++;
}
</script>
