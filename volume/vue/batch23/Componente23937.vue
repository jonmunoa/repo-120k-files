<template>
  <section class="panel-23937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23937");
const base = ref(23937);
const total = computed(() => base.value * 2);

function incrementar23937() {
  base.value++;
}
</script>
