<template>
  <section class="panel-30177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30177");
const base = ref(30177);
const total = computed(() => base.value * 2);

function incrementar30177() {
  base.value++;
}
</script>
