<template>
  <section class="panel-20461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20461");
const base = ref(20461);
const total = computed(() => base.value * 2);

function incrementar20461() {
  base.value++;
}
</script>
