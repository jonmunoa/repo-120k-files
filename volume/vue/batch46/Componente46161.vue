<template>
  <section class="panel-46161">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46161");
const base = ref(46161);
const total = computed(() => base.value * 2);

function incrementar46161() {
  base.value++;
}
</script>
