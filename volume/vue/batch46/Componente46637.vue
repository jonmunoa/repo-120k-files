<template>
  <section class="panel-46637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46637");
const base = ref(46637);
const total = computed(() => base.value * 2);

function incrementar46637() {
  base.value++;
}
</script>
