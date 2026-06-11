<template>
  <section class="panel-46441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46441");
const base = ref(46441);
const total = computed(() => base.value * 2);

function incrementar46441() {
  base.value++;
}
</script>
