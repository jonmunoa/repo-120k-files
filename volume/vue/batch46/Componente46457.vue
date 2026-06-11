<template>
  <section class="panel-46457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46457");
const base = ref(46457);
const total = computed(() => base.value * 2);

function incrementar46457() {
  base.value++;
}
</script>
