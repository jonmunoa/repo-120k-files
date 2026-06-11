<template>
  <section class="panel-30417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30417");
const base = ref(30417);
const total = computed(() => base.value * 2);

function incrementar30417() {
  base.value++;
}
</script>
