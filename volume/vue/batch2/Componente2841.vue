<template>
  <section class="panel-2841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2841");
const base = ref(2841);
const total = computed(() => base.value * 2);

function incrementar2841() {
  base.value++;
}
</script>
