<template>
  <section class="panel-33689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33689");
const base = ref(33689);
const total = computed(() => base.value * 2);

function incrementar33689() {
  base.value++;
}
</script>
