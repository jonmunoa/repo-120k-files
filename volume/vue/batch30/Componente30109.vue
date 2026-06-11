<template>
  <section class="panel-30109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30109");
const base = ref(30109);
const total = computed(() => base.value * 2);

function incrementar30109() {
  base.value++;
}
</script>
