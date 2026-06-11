<template>
  <section class="panel-19653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19653");
const base = ref(19653);
const total = computed(() => base.value * 2);

function incrementar19653() {
  base.value++;
}
</script>
