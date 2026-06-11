<template>
  <section class="panel-19425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19425");
const base = ref(19425);
const total = computed(() => base.value * 2);

function incrementar19425() {
  base.value++;
}
</script>
