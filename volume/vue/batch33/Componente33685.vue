<template>
  <section class="panel-33685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33685");
const base = ref(33685);
const total = computed(() => base.value * 2);

function incrementar33685() {
  base.value++;
}
</script>
