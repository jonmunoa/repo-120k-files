<template>
  <section class="panel-46857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46857");
const base = ref(46857);
const total = computed(() => base.value * 2);

function incrementar46857() {
  base.value++;
}
</script>
