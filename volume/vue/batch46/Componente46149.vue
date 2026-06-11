<template>
  <section class="panel-46149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46149");
const base = ref(46149);
const total = computed(() => base.value * 2);

function incrementar46149() {
  base.value++;
}
</script>
