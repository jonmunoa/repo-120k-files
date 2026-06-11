<template>
  <section class="panel-42661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42661");
const base = ref(42661);
const total = computed(() => base.value * 2);

function incrementar42661() {
  base.value++;
}
</script>
