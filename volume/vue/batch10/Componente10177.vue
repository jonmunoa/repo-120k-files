<template>
  <section class="panel-10177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10177");
const base = ref(10177);
const total = computed(() => base.value * 2);

function incrementar10177() {
  base.value++;
}
</script>
