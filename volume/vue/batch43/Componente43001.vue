<template>
  <section class="panel-43001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43001");
const base = ref(43001);
const total = computed(() => base.value * 2);

function incrementar43001() {
  base.value++;
}
</script>
