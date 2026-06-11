<template>
  <section class="panel-2561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2561");
const base = ref(2561);
const total = computed(() => base.value * 2);

function incrementar2561() {
  base.value++;
}
</script>
