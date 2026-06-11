<template>
  <section class="panel-46445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46445");
const base = ref(46445);
const total = computed(() => base.value * 2);

function incrementar46445() {
  base.value++;
}
</script>
