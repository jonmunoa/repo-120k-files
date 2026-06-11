<template>
  <section class="panel-51689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51689");
const base = ref(51689);
const total = computed(() => base.value * 2);

function incrementar51689() {
  base.value++;
}
</script>
