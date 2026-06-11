<template>
  <section class="panel-9357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9357");
const base = ref(9357);
const total = computed(() => base.value * 2);

function incrementar9357() {
  base.value++;
}
</script>
