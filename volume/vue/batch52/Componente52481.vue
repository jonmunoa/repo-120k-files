<template>
  <section class="panel-52481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52481");
const base = ref(52481);
const total = computed(() => base.value * 2);

function incrementar52481() {
  base.value++;
}
</script>
