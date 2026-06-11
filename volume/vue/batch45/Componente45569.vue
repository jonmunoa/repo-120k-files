<template>
  <section class="panel-45569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45569");
const base = ref(45569);
const total = computed(() => base.value * 2);

function incrementar45569() {
  base.value++;
}
</script>
