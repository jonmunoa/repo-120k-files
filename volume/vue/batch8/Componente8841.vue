<template>
  <section class="panel-8841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8841");
const base = ref(8841);
const total = computed(() => base.value * 2);

function incrementar8841() {
  base.value++;
}
</script>
