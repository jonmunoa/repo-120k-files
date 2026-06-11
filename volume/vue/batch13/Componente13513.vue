<template>
  <section class="panel-13513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13513");
const base = ref(13513);
const total = computed(() => base.value * 2);

function incrementar13513() {
  base.value++;
}
</script>
