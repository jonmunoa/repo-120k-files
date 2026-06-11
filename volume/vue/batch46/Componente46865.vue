<template>
  <section class="panel-46865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46865");
const base = ref(46865);
const total = computed(() => base.value * 2);

function incrementar46865() {
  base.value++;
}
</script>
