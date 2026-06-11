<template>
  <section class="panel-21417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21417");
const base = ref(21417);
const total = computed(() => base.value * 2);

function incrementar21417() {
  base.value++;
}
</script>
