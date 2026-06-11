<template>
  <section class="panel-29561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29561");
const base = ref(29561);
const total = computed(() => base.value * 2);

function incrementar29561() {
  base.value++;
}
</script>
