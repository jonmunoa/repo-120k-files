<template>
  <section class="panel-29937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29937");
const base = ref(29937);
const total = computed(() => base.value * 2);

function incrementar29937() {
  base.value++;
}
</script>
