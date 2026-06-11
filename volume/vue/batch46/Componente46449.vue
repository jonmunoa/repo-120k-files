<template>
  <section class="panel-46449">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46449");
const base = ref(46449);
const total = computed(() => base.value * 2);

function incrementar46449() {
  base.value++;
}
</script>
