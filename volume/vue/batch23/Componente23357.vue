<template>
  <section class="panel-23357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23357");
const base = ref(23357);
const total = computed(() => base.value * 2);

function incrementar23357() {
  base.value++;
}
</script>
