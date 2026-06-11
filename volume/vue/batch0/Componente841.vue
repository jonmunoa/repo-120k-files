<template>
  <section class="panel-841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 841");
const base = ref(841);
const total = computed(() => base.value * 2);

function incrementar841() {
  base.value++;
}
</script>
