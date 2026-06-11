<template>
  <section class="panel-19677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19677");
const base = ref(19677);
const total = computed(() => base.value * 2);

function incrementar19677() {
  base.value++;
}
</script>
