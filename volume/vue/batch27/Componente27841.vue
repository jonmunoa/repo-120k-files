<template>
  <section class="panel-27841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27841");
const base = ref(27841);
const total = computed(() => base.value * 2);

function incrementar27841() {
  base.value++;
}
</script>
