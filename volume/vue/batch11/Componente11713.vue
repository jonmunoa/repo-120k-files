<template>
  <section class="panel-11713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11713");
const base = ref(11713);
const total = computed(() => base.value * 2);

function incrementar11713() {
  base.value++;
}
</script>
