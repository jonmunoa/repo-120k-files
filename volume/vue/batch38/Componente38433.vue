<template>
  <section class="panel-38433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38433");
const base = ref(38433);
const total = computed(() => base.value * 2);

function incrementar38433() {
  base.value++;
}
</script>
