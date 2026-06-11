<template>
  <section class="panel-18677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18677");
const base = ref(18677);
const total = computed(() => base.value * 2);

function incrementar18677() {
  base.value++;
}
</script>
