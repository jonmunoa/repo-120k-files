<template>
  <section class="panel-17657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17657");
const base = ref(17657);
const total = computed(() => base.value * 2);

function incrementar17657() {
  base.value++;
}
</script>
