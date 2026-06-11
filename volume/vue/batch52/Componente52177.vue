<template>
  <section class="panel-52177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52177");
const base = ref(52177);
const total = computed(() => base.value * 2);

function incrementar52177() {
  base.value++;
}
</script>
