<template>
  <section class="panel-50177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50177");
const base = ref(50177);
const total = computed(() => base.value * 2);

function incrementar50177() {
  base.value++;
}
</script>
