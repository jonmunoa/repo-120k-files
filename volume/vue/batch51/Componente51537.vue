<template>
  <section class="panel-51537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51537");
const base = ref(51537);
const total = computed(() => base.value * 2);

function incrementar51537() {
  base.value++;
}
</script>
