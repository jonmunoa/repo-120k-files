<template>
  <section class="panel-31841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31841");
const base = ref(31841);
const total = computed(() => base.value * 2);

function incrementar31841() {
  base.value++;
}
</script>
