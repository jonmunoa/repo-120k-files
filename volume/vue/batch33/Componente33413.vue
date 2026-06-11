<template>
  <section class="panel-33413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33413");
const base = ref(33413);
const total = computed(() => base.value * 2);

function incrementar33413() {
  base.value++;
}
</script>
