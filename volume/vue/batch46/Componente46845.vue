<template>
  <section class="panel-46845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46845");
const base = ref(46845);
const total = computed(() => base.value * 2);

function incrementar46845() {
  base.value++;
}
</script>
