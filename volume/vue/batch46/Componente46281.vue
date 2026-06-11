<template>
  <section class="panel-46281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46281");
const base = ref(46281);
const total = computed(() => base.value * 2);

function incrementar46281() {
  base.value++;
}
</script>
