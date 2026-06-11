<template>
  <section class="panel-46037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46037");
const base = ref(46037);
const total = computed(() => base.value * 2);

function incrementar46037() {
  base.value++;
}
</script>
