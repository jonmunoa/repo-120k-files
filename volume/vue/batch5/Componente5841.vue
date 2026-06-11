<template>
  <section class="panel-5841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5841");
const base = ref(5841);
const total = computed(() => base.value * 2);

function incrementar5841() {
  base.value++;
}
</script>
