<template>
  <section class="panel-44709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44709");
const base = ref(44709);
const total = computed(() => base.value * 2);

function incrementar44709() {
  base.value++;
}
</script>
