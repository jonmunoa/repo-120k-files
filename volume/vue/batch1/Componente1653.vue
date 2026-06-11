<template>
  <section class="panel-1653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1653");
const base = ref(1653);
const total = computed(() => base.value * 2);

function incrementar1653() {
  base.value++;
}
</script>
