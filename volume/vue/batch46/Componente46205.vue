<template>
  <section class="panel-46205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46205");
const base = ref(46205);
const total = computed(() => base.value * 2);

function incrementar46205() {
  base.value++;
}
</script>
