<template>
  <section class="panel-1001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1001");
const base = ref(1001);
const total = computed(() => base.value * 2);

function incrementar1001() {
  base.value++;
}
</script>
