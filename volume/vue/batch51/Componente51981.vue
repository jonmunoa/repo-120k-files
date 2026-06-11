<template>
  <section class="panel-51981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51981");
const base = ref(51981);
const total = computed(() => base.value * 2);

function incrementar51981() {
  base.value++;
}
</script>
