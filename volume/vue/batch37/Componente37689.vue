<template>
  <section class="panel-37689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37689");
const base = ref(37689);
const total = computed(() => base.value * 2);

function incrementar37689() {
  base.value++;
}
</script>
