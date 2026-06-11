<template>
  <section class="panel-46769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46769");
const base = ref(46769);
const total = computed(() => base.value * 2);

function incrementar46769() {
  base.value++;
}
</script>
