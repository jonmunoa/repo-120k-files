<template>
  <section class="panel-46477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46477");
const base = ref(46477);
const total = computed(() => base.value * 2);

function incrementar46477() {
  base.value++;
}
</script>
