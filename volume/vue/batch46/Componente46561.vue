<template>
  <section class="panel-46561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46561");
const base = ref(46561);
const total = computed(() => base.value * 2);

function incrementar46561() {
  base.value++;
}
</script>
