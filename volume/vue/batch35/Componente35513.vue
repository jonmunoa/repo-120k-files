<template>
  <section class="panel-35513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35513");
const base = ref(35513);
const total = computed(() => base.value * 2);

function incrementar35513() {
  base.value++;
}
</script>
