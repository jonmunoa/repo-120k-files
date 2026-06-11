<template>
  <section class="panel-46789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46789");
const base = ref(46789);
const total = computed(() => base.value * 2);

function incrementar46789() {
  base.value++;
}
</script>
