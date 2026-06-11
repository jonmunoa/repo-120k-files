<template>
  <section class="panel-46841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46841");
const base = ref(46841);
const total = computed(() => base.value * 2);

function incrementar46841() {
  base.value++;
}
</script>
