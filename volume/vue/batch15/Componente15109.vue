<template>
  <section class="panel-15109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15109");
const base = ref(15109);
const total = computed(() => base.value * 2);

function incrementar15109() {
  base.value++;
}
</script>
