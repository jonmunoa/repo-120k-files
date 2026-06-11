<template>
  <section class="panel-46697">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46697");
const base = ref(46697);
const total = computed(() => base.value * 2);

function incrementar46697() {
  base.value++;
}
</script>
