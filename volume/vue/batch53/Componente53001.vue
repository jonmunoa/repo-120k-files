<template>
  <section class="panel-53001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53001");
const base = ref(53001);
const total = computed(() => base.value * 2);

function incrementar53001() {
  base.value++;
}
</script>
