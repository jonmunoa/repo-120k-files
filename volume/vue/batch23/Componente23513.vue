<template>
  <section class="panel-23513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23513");
const base = ref(23513);
const total = computed(() => base.value * 2);

function incrementar23513() {
  base.value++;
}
</script>
