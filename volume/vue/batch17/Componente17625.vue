<template>
  <section class="panel-17625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17625");
const base = ref(17625);
const total = computed(() => base.value * 2);

function incrementar17625() {
  base.value++;
}
</script>
