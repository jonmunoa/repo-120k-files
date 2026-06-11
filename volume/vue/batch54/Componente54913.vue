<template>
  <section class="panel-54913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54913");
const base = ref(54913);
const total = computed(() => base.value * 2);

function incrementar54913() {
  base.value++;
}
</script>
