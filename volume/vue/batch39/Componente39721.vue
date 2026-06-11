<template>
  <section class="panel-39721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39721");
const base = ref(39721);
const total = computed(() => base.value * 2);

function incrementar39721() {
  base.value++;
}
</script>
