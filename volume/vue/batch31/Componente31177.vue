<template>
  <section class="panel-31177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31177");
const base = ref(31177);
const total = computed(() => base.value * 2);

function incrementar31177() {
  base.value++;
}
</script>
