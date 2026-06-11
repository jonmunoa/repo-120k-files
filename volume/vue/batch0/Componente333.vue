<template>
  <section class="panel-333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 333");
const base = ref(333);
const total = computed(() => base.value * 2);

function incrementar333() {
  base.value++;
}
</script>
