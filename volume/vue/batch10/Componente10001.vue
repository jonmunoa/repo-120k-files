<template>
  <section class="panel-10001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10001");
const base = ref(10001);
const total = computed(() => base.value * 2);

function incrementar10001() {
  base.value++;
}
</script>
