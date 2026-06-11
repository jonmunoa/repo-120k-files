<template>
  <section class="panel-20065">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20065");
const base = ref(20065);
const total = computed(() => base.value * 2);

function incrementar20065() {
  base.value++;
}
</script>
