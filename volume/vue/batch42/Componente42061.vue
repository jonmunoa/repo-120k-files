<template>
  <section class="panel-42061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42061");
const base = ref(42061);
const total = computed(() => base.value * 2);

function incrementar42061() {
  base.value++;
}
</script>
