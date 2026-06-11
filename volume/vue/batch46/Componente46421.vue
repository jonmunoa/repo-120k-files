<template>
  <section class="panel-46421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46421");
const base = ref(46421);
const total = computed(() => base.value * 2);

function incrementar46421() {
  base.value++;
}
</script>
