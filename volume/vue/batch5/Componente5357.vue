<template>
  <section class="panel-5357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5357");
const base = ref(5357);
const total = computed(() => base.value * 2);

function incrementar5357() {
  base.value++;
}
</script>
