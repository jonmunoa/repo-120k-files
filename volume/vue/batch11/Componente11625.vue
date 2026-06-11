<template>
  <section class="panel-11625">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11625");
const base = ref(11625);
const total = computed(() => base.value * 2);

function incrementar11625() {
  base.value++;
}
</script>
