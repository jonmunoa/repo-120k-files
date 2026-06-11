<template>
  <section class="panel-1937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1937");
const base = ref(1937);
const total = computed(() => base.value * 2);

function incrementar1937() {
  base.value++;
}
</script>
