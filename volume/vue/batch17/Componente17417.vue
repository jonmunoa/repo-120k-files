<template>
  <section class="panel-17417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17417");
const base = ref(17417);
const total = computed(() => base.value * 2);

function incrementar17417() {
  base.value++;
}
</script>
