<template>
  <section class="panel-38509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38509");
const base = ref(38509);
const total = computed(() => base.value * 2);

function incrementar38509() {
  base.value++;
}
</script>
