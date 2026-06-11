<template>
  <section class="panel-45561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45561");
const base = ref(45561);
const total = computed(() => base.value * 2);

function incrementar45561() {
  base.value++;
}
</script>
