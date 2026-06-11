<template>
  <section class="panel-6401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6401");
const base = ref(6401);
const total = computed(() => base.value * 2);

function incrementar6401() {
  base.value++;
}
</script>
