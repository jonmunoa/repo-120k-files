<template>
  <section class="panel-46501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46501");
const base = ref(46501);
const total = computed(() => base.value * 2);

function incrementar46501() {
  base.value++;
}
</script>
