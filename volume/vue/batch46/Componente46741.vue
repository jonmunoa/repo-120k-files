<template>
  <section class="panel-46741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46741");
const base = ref(46741);
const total = computed(() => base.value * 2);

function incrementar46741() {
  base.value++;
}
</script>
