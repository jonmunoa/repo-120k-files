<template>
  <section class="panel-17297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17297");
const base = ref(17297);
const total = computed(() => base.value * 2);

function incrementar17297() {
  base.value++;
}
</script>
