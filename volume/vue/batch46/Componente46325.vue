<template>
  <section class="panel-46325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46325");
const base = ref(46325);
const total = computed(() => base.value * 2);

function incrementar46325() {
  base.value++;
}
</script>
