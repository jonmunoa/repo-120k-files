<template>
  <section class="panel-40045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40045");
const base = ref(40045);
const total = computed(() => base.value * 2);

function incrementar40045() {
  base.value++;
}
</script>
