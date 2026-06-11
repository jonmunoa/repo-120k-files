<template>
  <section class="panel-34149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34149");
const base = ref(34149);
const total = computed(() => base.value * 2);

function incrementar34149() {
  base.value++;
}
</script>
