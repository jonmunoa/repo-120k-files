<template>
  <section class="panel-53417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53417");
const base = ref(53417);
const total = computed(() => base.value * 2);

function incrementar53417() {
  base.value++;
}
</script>
