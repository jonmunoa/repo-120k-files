<template>
  <section class="panel-14557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14557");
const base = ref(14557);
const total = computed(() => base.value * 2);

function incrementar14557() {
  base.value++;
}
</script>
