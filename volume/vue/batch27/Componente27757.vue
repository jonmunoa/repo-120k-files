<template>
  <section class="panel-27757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27757");
const base = ref(27757);
const total = computed(() => base.value * 2);

function incrementar27757() {
  base.value++;
}
</script>
