<template>
  <section class="panel-4653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4653");
const base = ref(4653);
const total = computed(() => base.value * 2);

function incrementar4653() {
  base.value++;
}
</script>
