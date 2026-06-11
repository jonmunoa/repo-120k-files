<template>
  <section class="panel-41533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41533");
const base = ref(41533);
const total = computed(() => base.value * 2);

function incrementar41533() {
  base.value++;
}
</script>
