<template>
  <section class="panel-22001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22001");
const base = ref(22001);
const total = computed(() => base.value * 2);

function incrementar22001() {
  base.value++;
}
</script>
