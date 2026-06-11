<template>
  <section class="panel-32649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32649");
const base = ref(32649);
const total = computed(() => base.value * 2);

function incrementar32649() {
  base.value++;
}
</script>
