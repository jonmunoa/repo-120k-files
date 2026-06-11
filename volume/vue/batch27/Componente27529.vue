<template>
  <section class="panel-27529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27529");
const base = ref(27529);
const total = computed(() => base.value * 2);

function incrementar27529() {
  base.value++;
}
</script>
