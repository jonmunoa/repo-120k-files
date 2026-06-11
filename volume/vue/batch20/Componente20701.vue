<template>
  <section class="panel-20701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20701");
const base = ref(20701);
const total = computed(() => base.value * 2);

function incrementar20701() {
  base.value++;
}
</script>
