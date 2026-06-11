<template>
  <section class="panel-32841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32841");
const base = ref(32841);
const total = computed(() => base.value * 2);

function incrementar32841() {
  base.value++;
}
</script>
