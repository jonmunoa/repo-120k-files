<template>
  <section class="panel-49513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49513");
const base = ref(49513);
const total = computed(() => base.value * 2);

function incrementar49513() {
  base.value++;
}
</script>
