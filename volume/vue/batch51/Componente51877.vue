<template>
  <section class="panel-51877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51877");
const base = ref(51877);
const total = computed(() => base.value * 2);

function incrementar51877() {
  base.value++;
}
</script>
