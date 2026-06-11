<template>
  <section class="panel-46073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46073");
const base = ref(46073);
const total = computed(() => base.value * 2);

function incrementar46073() {
  base.value++;
}
</script>
