<template>
  <section class="panel-6001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6001");
const base = ref(6001);
const total = computed(() => base.value * 2);

function incrementar6001() {
  base.value++;
}
</script>
