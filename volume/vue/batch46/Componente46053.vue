<template>
  <section class="panel-46053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46053");
const base = ref(46053);
const total = computed(() => base.value * 2);

function incrementar46053() {
  base.value++;
}
</script>
