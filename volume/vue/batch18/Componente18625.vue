<template>
  <section class="panel-18625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18625");
const base = ref(18625);
const total = computed(() => base.value * 2);

function incrementar18625() {
  base.value++;
}
</script>
