<template>
  <section class="panel-46577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46577");
const base = ref(46577);
const total = computed(() => base.value * 2);

function incrementar46577() {
  base.value++;
}
</script>
