<template>
  <section class="panel-46513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46513");
const base = ref(46513);
const total = computed(() => base.value * 2);

function incrementar46513() {
  base.value++;
}
</script>
