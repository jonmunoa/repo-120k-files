<template>
  <section class="panel-47841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47841");
const base = ref(47841);
const total = computed(() => base.value * 2);

function incrementar47841() {
  base.value++;
}
</script>
