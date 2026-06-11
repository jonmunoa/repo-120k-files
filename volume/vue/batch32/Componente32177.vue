<template>
  <section class="panel-32177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32177");
const base = ref(32177);
const total = computed(() => base.value * 2);

function incrementar32177() {
  base.value++;
}
</script>
