<template>
  <section class="panel-41125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41125");
const base = ref(41125);
const total = computed(() => base.value * 2);

function incrementar41125() {
  base.value++;
}
</script>
