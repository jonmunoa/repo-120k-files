<template>
  <section class="panel-46337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46337");
const base = ref(46337);
const total = computed(() => base.value * 2);

function incrementar46337() {
  base.value++;
}
</script>
