<template>
  <section class="panel-24001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24001");
const base = ref(24001);
const total = computed(() => base.value * 2);

function incrementar24001() {
  base.value++;
}
</script>
