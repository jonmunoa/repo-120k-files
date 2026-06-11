<template>
  <section class="panel-34657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34657");
const base = ref(34657);
const total = computed(() => base.value * 2);

function incrementar34657() {
  base.value++;
}
</script>
