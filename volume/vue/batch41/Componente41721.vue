<template>
  <section class="panel-41721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41721");
const base = ref(41721);
const total = computed(() => base.value * 2);

function incrementar41721() {
  base.value++;
}
</script>
