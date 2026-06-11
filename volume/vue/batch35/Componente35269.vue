<template>
  <section class="panel-35269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35269");
const base = ref(35269);
const total = computed(() => base.value * 2);

function incrementar35269() {
  base.value++;
}
</script>
