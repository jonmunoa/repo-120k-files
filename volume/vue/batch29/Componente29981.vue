<template>
  <section class="panel-29981">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29981");
const base = ref(29981);
const total = computed(() => base.value * 2);

function incrementar29981() {
  base.value++;
}
</script>
