<template>
  <section class="panel-657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 657");
const base = ref(657);
const total = computed(() => base.value * 2);

function incrementar657() {
  base.value++;
}
</script>
