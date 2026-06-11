<template>
  <section class="panel-33093">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33093");
const base = ref(33093);
const total = computed(() => base.value * 2);

function incrementar33093() {
  base.value++;
}
</script>
