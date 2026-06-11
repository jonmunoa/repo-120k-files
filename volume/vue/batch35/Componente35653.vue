<template>
  <section class="panel-35653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35653");
const base = ref(35653);
const total = computed(() => base.value * 2);

function incrementar35653() {
  base.value++;
}
</script>
