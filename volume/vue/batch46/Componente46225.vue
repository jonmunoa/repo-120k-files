<template>
  <section class="panel-46225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46225");
const base = ref(46225);
const total = computed(() => base.value * 2);

function incrementar46225() {
  base.value++;
}
</script>
