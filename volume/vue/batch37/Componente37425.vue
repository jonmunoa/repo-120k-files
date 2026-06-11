<template>
  <section class="panel-37425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37425");
const base = ref(37425);
const total = computed(() => base.value * 2);

function incrementar37425() {
  base.value++;
}
</script>
