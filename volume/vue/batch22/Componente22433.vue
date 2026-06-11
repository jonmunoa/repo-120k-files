<template>
  <section class="panel-22433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22433");
const base = ref(22433);
const total = computed(() => base.value * 2);

function incrementar22433() {
  base.value++;
}
</script>
