<template>
  <section class="panel-46937">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46937");
const base = ref(46937);
const total = computed(() => base.value * 2);

function incrementar46937() {
  base.value++;
}
</script>
