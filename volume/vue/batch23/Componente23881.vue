<template>
  <section class="panel-23881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23881");
const base = ref(23881);
const total = computed(() => base.value * 2);

function incrementar23881() {
  base.value++;
}
</script>
