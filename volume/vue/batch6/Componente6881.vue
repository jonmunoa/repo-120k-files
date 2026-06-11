<template>
  <section class="panel-6881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6881");
const base = ref(6881);
const total = computed(() => base.value * 2);

function incrementar6881() {
  base.value++;
}
</script>
