<template>
  <section class="panel-417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 417");
const base = ref(417);
const total = computed(() => base.value * 2);

function incrementar417() {
  base.value++;
}
</script>
