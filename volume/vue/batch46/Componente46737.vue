<template>
  <section class="panel-46737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46737");
const base = ref(46737);
const total = computed(() => base.value * 2);

function incrementar46737() {
  base.value++;
}
</script>
