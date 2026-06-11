<template>
  <section class="panel-19413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19413");
const base = ref(19413);
const total = computed(() => base.value * 2);

function incrementar19413() {
  base.value++;
}
</script>
