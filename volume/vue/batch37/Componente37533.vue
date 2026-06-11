<template>
  <section class="panel-37533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37533");
const base = ref(37533);
const total = computed(() => base.value * 2);

function incrementar37533() {
  base.value++;
}
</script>
