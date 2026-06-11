<template>
  <section class="panel-41925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41925");
const base = ref(41925);
const total = computed(() => base.value * 2);

function incrementar41925() {
  base.value++;
}
</script>
