<template>
  <section class="panel-35625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35625");
const base = ref(35625);
const total = computed(() => base.value * 2);

function incrementar35625() {
  base.value++;
}
</script>
