<template>
  <section class="panel-12653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12653");
const base = ref(12653);
const total = computed(() => base.value * 2);

function incrementar12653() {
  base.value++;
}
</script>
