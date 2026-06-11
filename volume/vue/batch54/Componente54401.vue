<template>
  <section class="panel-54401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54401");
const base = ref(54401);
const total = computed(() => base.value * 2);

function incrementar54401() {
  base.value++;
}
</script>
