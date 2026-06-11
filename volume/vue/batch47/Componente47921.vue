<template>
  <section class="panel-47921">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47921");
const base = ref(47921);
const total = computed(() => base.value * 2);

function incrementar47921() {
  base.value++;
}
</script>
