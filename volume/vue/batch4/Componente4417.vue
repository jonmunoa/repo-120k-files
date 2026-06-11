<template>
  <section class="panel-4417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4417");
const base = ref(4417);
const total = computed(() => base.value * 2);

function incrementar4417() {
  base.value++;
}
</script>
