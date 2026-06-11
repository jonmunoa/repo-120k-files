<template>
  <section class="panel-46821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46821");
const base = ref(46821);
const total = computed(() => base.value * 2);

function incrementar46821() {
  base.value++;
}
</script>
