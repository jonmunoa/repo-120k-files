<template>
  <section class="panel-42925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42925");
const base = ref(42925);
const total = computed(() => base.value * 2);

function incrementar42925() {
  base.value++;
}
</script>
