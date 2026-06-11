<template>
  <section class="panel-46121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46121");
const base = ref(46121);
const total = computed(() => base.value * 2);

function incrementar46121() {
  base.value++;
}
</script>
