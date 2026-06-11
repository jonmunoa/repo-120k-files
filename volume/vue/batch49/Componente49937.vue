<template>
  <section class="panel-49937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49937");
const base = ref(49937);
const total = computed(() => base.value * 2);

function incrementar49937() {
  base.value++;
}
</script>
