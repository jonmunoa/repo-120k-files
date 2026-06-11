<template>
  <section class="panel-11653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11653");
const base = ref(11653);
const total = computed(() => base.value * 2);

function incrementar11653() {
  base.value++;
}
</script>
