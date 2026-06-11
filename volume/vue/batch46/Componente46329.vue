<template>
  <section class="panel-46329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46329");
const base = ref(46329);
const total = computed(() => base.value * 2);

function incrementar46329() {
  base.value++;
}
</script>
