<template>
  <section class="panel-3925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3925");
const base = ref(3925);
const total = computed(() => base.value * 2);

function incrementar3925() {
  base.value++;
}
</script>
