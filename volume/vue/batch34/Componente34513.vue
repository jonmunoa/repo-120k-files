<template>
  <section class="panel-34513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34513");
const base = ref(34513);
const total = computed(() => base.value * 2);

function incrementar34513() {
  base.value++;
}
</script>
