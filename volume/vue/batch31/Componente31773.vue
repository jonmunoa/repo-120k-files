<template>
  <section class="panel-31773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31773");
const base = ref(31773);
const total = computed(() => base.value * 2);

function incrementar31773() {
  base.value++;
}
</script>
