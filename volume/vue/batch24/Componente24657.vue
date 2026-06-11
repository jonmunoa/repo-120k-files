<template>
  <section class="panel-24657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24657");
const base = ref(24657);
const total = computed(() => base.value * 2);

function incrementar24657() {
  base.value++;
}
</script>
