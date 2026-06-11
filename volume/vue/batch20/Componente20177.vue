<template>
  <section class="panel-20177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20177");
const base = ref(20177);
const total = computed(() => base.value * 2);

function incrementar20177() {
  base.value++;
}
</script>
