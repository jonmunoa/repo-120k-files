<template>
  <section class="panel-46777">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46777");
const base = ref(46777);
const total = computed(() => base.value * 2);

function incrementar46777() {
  base.value++;
}
</script>
