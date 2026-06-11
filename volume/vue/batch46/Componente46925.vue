<template>
  <section class="panel-46925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 46925");
const base = ref(46925);
const total = computed(() => base.value * 2);

function incrementar46925() {
  base.value++;
}
</script>
