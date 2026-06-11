<template>
  <section class="panel-15813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15813");
const base = ref(15813);
const total = computed(() => base.value * 2);

function incrementar15813() {
  base.value++;
}
</script>
