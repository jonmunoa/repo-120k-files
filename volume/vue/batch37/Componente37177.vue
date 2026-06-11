<template>
  <section class="panel-37177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37177");
const base = ref(37177);
const total = computed(() => base.value * 2);

function incrementar37177() {
  base.value++;
}
</script>
