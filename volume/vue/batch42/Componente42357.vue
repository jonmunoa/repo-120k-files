<template>
  <section class="panel-42357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42357");
const base = ref(42357);
const total = computed(() => base.value * 2);

function incrementar42357() {
  base.value++;
}
</script>
