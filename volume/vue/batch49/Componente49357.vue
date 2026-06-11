<template>
  <section class="panel-49357">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49357");
const base = ref(49357);
const total = computed(() => base.value * 2);

function incrementar49357() {
  base.value++;
}
</script>
