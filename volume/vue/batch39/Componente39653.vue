<template>
  <section class="panel-39653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39653");
const base = ref(39653);
const total = computed(() => base.value * 2);

function incrementar39653() {
  base.value++;
}
</script>
