<template>
  <section class="panel-14581">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14581");
const base = ref(14581);
const total = computed(() => base.value * 2);

function incrementar14581() {
  base.value++;
}
</script>
