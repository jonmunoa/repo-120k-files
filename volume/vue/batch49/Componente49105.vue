<template>
  <section class="panel-49105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49105");
const base = ref(49105);
const total = computed(() => base.value * 2);

function incrementar49105() {
  base.value++;
}
</script>
