<template>
  <section class="panel-39841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39841");
const base = ref(39841);
const total = computed(() => base.value * 2);

function incrementar39841() {
  base.value++;
}
</script>
