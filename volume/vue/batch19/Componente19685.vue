<template>
  <section class="panel-19685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19685");
const base = ref(19685);
const total = computed(() => base.value * 2);

function incrementar19685() {
  base.value++;
}
</script>
