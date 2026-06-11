<template>
  <section class="panel-9925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9925");
const base = ref(9925);
const total = computed(() => base.value * 2);

function incrementar9925() {
  base.value++;
}
</script>
