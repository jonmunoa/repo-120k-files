<template>
  <section class="panel-29737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29737");
const base = ref(29737);
const total = computed(() => base.value * 2);

function incrementar29737() {
  base.value++;
}
</script>
