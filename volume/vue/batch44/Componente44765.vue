<template>
  <section class="panel-44765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44765");
const base = ref(44765);
const total = computed(() => base.value * 2);

function incrementar44765() {
  base.value++;
}
</script>
