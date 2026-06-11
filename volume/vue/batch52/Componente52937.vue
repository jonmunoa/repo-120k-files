<template>
  <section class="panel-52937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52937");
const base = ref(52937);
const total = computed(() => base.value * 2);

function incrementar52937() {
  base.value++;
}
</script>
