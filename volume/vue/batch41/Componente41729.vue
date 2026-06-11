<template>
  <section class="panel-41729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41729");
const base = ref(41729);
const total = computed(() => base.value * 2);

function incrementar41729() {
  base.value++;
}
</script>
