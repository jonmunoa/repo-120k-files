<template>
  <section class="panel-31729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31729");
const base = ref(31729);
const total = computed(() => base.value * 2);

function incrementar31729() {
  base.value++;
}
</script>
