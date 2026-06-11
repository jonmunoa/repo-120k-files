<template>
  <section class="panel-38093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38093");
const base = ref(38093);
const total = computed(() => base.value * 2);

function incrementar38093() {
  base.value++;
}
</script>
