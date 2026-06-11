<template>
  <section class="panel-7653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7653");
const base = ref(7653);
const total = computed(() => base.value * 2);

function incrementar7653() {
  base.value++;
}
</script>
