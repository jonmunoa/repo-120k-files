<template>
  <section class="panel-51401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51401");
const base = ref(51401);
const total = computed(() => base.value * 2);

function incrementar51401() {
  base.value++;
}
</script>
