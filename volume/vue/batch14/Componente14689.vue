<template>
  <section class="panel-14689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14689");
const base = ref(14689);
const total = computed(() => base.value * 2);

function incrementar14689() {
  base.value++;
}
</script>
