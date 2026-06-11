<template>
  <section class="panel-9001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9001");
const base = ref(9001);
const total = computed(() => base.value * 2);

function incrementar9001() {
  base.value++;
}
</script>
