<template>
  <section class="panel-22109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22109");
const base = ref(22109);
const total = computed(() => base.value * 2);

function incrementar22109() {
  base.value++;
}
</script>
