<template>
  <section class="panel-31413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31413");
const base = ref(31413);
const total = computed(() => base.value * 2);

function incrementar31413() {
  base.value++;
}
</script>
