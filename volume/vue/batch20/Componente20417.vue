<template>
  <section class="panel-20417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20417");
const base = ref(20417);
const total = computed(() => base.value * 2);

function incrementar20417() {
  base.value++;
}
</script>
