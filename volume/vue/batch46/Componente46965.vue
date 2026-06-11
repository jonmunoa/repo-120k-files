<template>
  <section class="panel-46965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46965");
const base = ref(46965);
const total = computed(() => base.value * 2);

function incrementar46965() {
  base.value++;
}
</script>
