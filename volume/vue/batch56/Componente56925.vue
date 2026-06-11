<template>
  <section class="panel-56925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56925");
const base = ref(56925);
const total = computed(() => base.value * 2);

function incrementar56925() {
  base.value++;
}
</script>
