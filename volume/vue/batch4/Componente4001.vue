<template>
  <section class="panel-4001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4001");
const base = ref(4001);
const total = computed(() => base.value * 2);

function incrementar4001() {
  base.value++;
}
</script>
