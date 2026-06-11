<template>
  <section class="panel-41653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41653");
const base = ref(41653);
const total = computed(() => base.value * 2);

function incrementar41653() {
  base.value++;
}
</script>
