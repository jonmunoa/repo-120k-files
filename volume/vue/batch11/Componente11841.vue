<template>
  <section class="panel-11841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11841");
const base = ref(11841);
const total = computed(() => base.value * 2);

function incrementar11841() {
  base.value++;
}
</script>
