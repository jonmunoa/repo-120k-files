<template>
  <section class="panel-46273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46273");
const base = ref(46273);
const total = computed(() => base.value * 2);

function incrementar46273() {
  base.value++;
}
</script>
