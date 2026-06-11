<template>
  <section class="panel-52841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52841");
const base = ref(52841);
const total = computed(() => base.value * 2);

function incrementar52841() {
  base.value++;
}
</script>
