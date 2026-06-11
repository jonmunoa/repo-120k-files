<template>
  <section class="panel-33333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33333");
const base = ref(33333);
const total = computed(() => base.value * 2);

function incrementar33333() {
  base.value++;
}
</script>
