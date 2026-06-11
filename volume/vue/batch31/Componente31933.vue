<template>
  <section class="panel-31933">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31933");
const base = ref(31933);
const total = computed(() => base.value * 2);

function incrementar31933() {
  base.value++;
}
</script>
