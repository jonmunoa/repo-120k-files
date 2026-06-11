<template>
  <section class="panel-14509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14509");
const base = ref(14509);
const total = computed(() => base.value * 2);

function incrementar14509() {
  base.value++;
}
</script>
