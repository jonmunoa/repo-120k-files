<template>
  <section class="panel-29277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29277");
const base = ref(29277);
const total = computed(() => base.value * 2);

function incrementar29277() {
  base.value++;
}
</script>
