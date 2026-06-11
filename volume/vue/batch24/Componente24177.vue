<template>
  <section class="panel-24177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24177");
const base = ref(24177);
const total = computed(() => base.value * 2);

function incrementar24177() {
  base.value++;
}
</script>
