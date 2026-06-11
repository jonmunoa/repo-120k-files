<template>
  <section class="panel-31721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31721");
const base = ref(31721);
const total = computed(() => base.value * 2);

function incrementar31721() {
  base.value++;
}
</script>
