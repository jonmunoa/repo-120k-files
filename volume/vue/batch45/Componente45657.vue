<template>
  <section class="panel-45657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45657");
const base = ref(45657);
const total = computed(() => base.value * 2);

function incrementar45657() {
  base.value++;
}
</script>
