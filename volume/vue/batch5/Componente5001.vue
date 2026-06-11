<template>
  <section class="panel-5001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5001");
const base = ref(5001);
const total = computed(() => base.value * 2);

function incrementar5001() {
  base.value++;
}
</script>
