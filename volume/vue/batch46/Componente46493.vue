<template>
  <section class="panel-46493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46493");
const base = ref(46493);
const total = computed(() => base.value * 2);

function incrementar46493() {
  base.value++;
}
</script>
