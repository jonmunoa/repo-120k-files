<template>
  <section class="panel-34069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34069");
const base = ref(34069);
const total = computed(() => base.value * 2);

function incrementar34069() {
  base.value++;
}
</script>
