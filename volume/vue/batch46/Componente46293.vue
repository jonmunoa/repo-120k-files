<template>
  <section class="panel-46293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46293");
const base = ref(46293);
const total = computed(() => base.value * 2);

function incrementar46293() {
  base.value++;
}
</script>
