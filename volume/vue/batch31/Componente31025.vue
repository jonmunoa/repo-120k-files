<template>
  <section class="panel-31025">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31025");
const base = ref(31025);
const total = computed(() => base.value * 2);

function incrementar31025() {
  base.value++;
}
</script>
