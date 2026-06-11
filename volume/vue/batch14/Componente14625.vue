<template>
  <section class="panel-14625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14625");
const base = ref(14625);
const total = computed(() => base.value * 2);

function incrementar14625() {
  base.value++;
}
</script>
