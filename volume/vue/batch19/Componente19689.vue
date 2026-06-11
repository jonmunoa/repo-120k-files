<template>
  <section class="panel-19689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19689");
const base = ref(19689);
const total = computed(() => base.value * 2);

function incrementar19689() {
  base.value++;
}
</script>
