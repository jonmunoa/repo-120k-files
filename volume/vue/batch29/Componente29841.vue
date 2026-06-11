<template>
  <section class="panel-29841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29841");
const base = ref(29841);
const total = computed(() => base.value * 2);

function incrementar29841() {
  base.value++;
}
</script>
