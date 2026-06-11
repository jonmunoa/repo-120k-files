<template>
  <section class="panel-32001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32001");
const base = ref(32001);
const total = computed(() => base.value * 2);

function incrementar32001() {
  base.value++;
}
</script>
