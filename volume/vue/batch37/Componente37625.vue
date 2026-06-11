<template>
  <section class="panel-37625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37625");
const base = ref(37625);
const total = computed(() => base.value * 2);

function incrementar37625() {
  base.value++;
}
</script>
