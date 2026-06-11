<template>
  <section class="panel-37413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37413");
const base = ref(37413);
const total = computed(() => base.value * 2);

function incrementar37413() {
  base.value++;
}
</script>
