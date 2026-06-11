<template>
  <section class="panel-46401">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46401");
const base = ref(46401);
const total = computed(() => base.value * 2);

function incrementar46401() {
  base.value++;
}
</script>
