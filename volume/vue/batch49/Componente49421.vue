<template>
  <section class="panel-49421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49421");
const base = ref(49421);
const total = computed(() => base.value * 2);

function incrementar49421() {
  base.value++;
}
</script>
