<template>
  <section class="panel-47417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47417");
const base = ref(47417);
const total = computed(() => base.value * 2);

function incrementar47417() {
  base.value++;
}
</script>
