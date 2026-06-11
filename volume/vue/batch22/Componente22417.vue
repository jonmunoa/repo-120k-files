<template>
  <section class="panel-22417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22417");
const base = ref(22417);
const total = computed(() => base.value * 2);

function incrementar22417() {
  base.value++;
}
</script>
