<template>
  <section class="panel-53653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53653");
const base = ref(53653);
const total = computed(() => base.value * 2);

function incrementar53653() {
  base.value++;
}
</script>
