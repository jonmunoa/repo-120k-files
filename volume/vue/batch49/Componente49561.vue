<template>
  <section class="panel-49561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49561");
const base = ref(49561);
const total = computed(() => base.value * 2);

function incrementar49561() {
  base.value++;
}
</script>
