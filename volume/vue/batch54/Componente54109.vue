<template>
  <section class="panel-54109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54109");
const base = ref(54109);
const total = computed(() => base.value * 2);

function incrementar54109() {
  base.value++;
}
</script>
