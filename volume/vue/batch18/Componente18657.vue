<template>
  <section class="panel-18657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18657");
const base = ref(18657);
const total = computed(() => base.value * 2);

function incrementar18657() {
  base.value++;
}
</script>
