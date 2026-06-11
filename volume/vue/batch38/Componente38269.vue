<template>
  <section class="panel-38269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38269");
const base = ref(38269);
const total = computed(() => base.value * 2);

function incrementar38269() {
  base.value++;
}
</script>
