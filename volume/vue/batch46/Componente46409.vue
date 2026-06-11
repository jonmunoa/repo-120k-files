<template>
  <section class="panel-46409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46409");
const base = ref(46409);
const total = computed(() => base.value * 2);

function incrementar46409() {
  base.value++;
}
</script>
