<template>
  <section class="panel-35841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35841");
const base = ref(35841);
const total = computed(() => base.value * 2);

function incrementar35841() {
  base.value++;
}
</script>
