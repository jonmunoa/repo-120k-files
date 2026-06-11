<template>
  <section class="panel-29177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29177");
const base = ref(29177);
const total = computed(() => base.value * 2);

function incrementar29177() {
  base.value++;
}
</script>
