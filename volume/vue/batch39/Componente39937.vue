<template>
  <section class="panel-39937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39937");
const base = ref(39937);
const total = computed(() => base.value * 2);

function incrementar39937() {
  base.value++;
}
</script>
