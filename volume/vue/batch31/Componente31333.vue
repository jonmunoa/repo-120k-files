<template>
  <section class="panel-31333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31333");
const base = ref(31333);
const total = computed(() => base.value * 2);

function incrementar31333() {
  base.value++;
}
</script>
