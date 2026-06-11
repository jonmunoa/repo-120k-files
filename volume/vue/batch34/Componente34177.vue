<template>
  <section class="panel-34177">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34177");
const base = ref(34177);
const total = computed(() => base.value * 2);

function incrementar34177() {
  base.value++;
}
</script>
