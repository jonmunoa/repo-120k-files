<template>
  <section class="panel-46897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46897");
const base = ref(46897);
const total = computed(() => base.value * 2);

function incrementar46897() {
  base.value++;
}
</script>
