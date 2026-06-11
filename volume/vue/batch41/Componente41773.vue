<template>
  <section class="panel-41773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41773");
const base = ref(41773);
const total = computed(() => base.value * 2);

function incrementar41773() {
  base.value++;
}
</script>
