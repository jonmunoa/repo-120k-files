<template>
  <section class="panel-21333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21333");
const base = ref(21333);
const total = computed(() => base.value * 2);

function incrementar21333() {
  base.value++;
}
</script>
