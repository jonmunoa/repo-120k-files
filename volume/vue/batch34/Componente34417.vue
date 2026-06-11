<template>
  <section class="panel-34417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34417");
const base = ref(34417);
const total = computed(() => base.value * 2);

function incrementar34417() {
  base.value++;
}
</script>
