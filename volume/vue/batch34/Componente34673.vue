<template>
  <section class="panel-34673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34673");
const base = ref(34673);
const total = computed(() => base.value * 2);

function incrementar34673() {
  base.value++;
}
</script>
