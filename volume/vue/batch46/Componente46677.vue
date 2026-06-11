<template>
  <section class="panel-46677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46677");
const base = ref(46677);
const total = computed(() => base.value * 2);

function incrementar46677() {
  base.value++;
}
</script>
