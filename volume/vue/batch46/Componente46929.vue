<template>
  <section class="panel-46929">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46929");
const base = ref(46929);
const total = computed(() => base.value * 2);

function incrementar46929() {
  base.value++;
}
</script>
