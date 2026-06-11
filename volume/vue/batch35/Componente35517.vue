<template>
  <section class="panel-35517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35517");
const base = ref(35517);
const total = computed(() => base.value * 2);

function incrementar35517() {
  base.value++;
}
</script>
