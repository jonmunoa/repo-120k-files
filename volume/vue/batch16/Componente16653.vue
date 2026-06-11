<template>
  <section class="panel-16653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16653");
const base = ref(16653);
const total = computed(() => base.value * 2);

function incrementar16653() {
  base.value++;
}
</script>
