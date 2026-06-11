<template>
  <section class="panel-45001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45001");
const base = ref(45001);
const total = computed(() => base.value * 2);

function incrementar45001() {
  base.value++;
}
</script>
