<template>
  <section class="panel-51829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51829");
const base = ref(51829);
const total = computed(() => base.value * 2);

function incrementar51829() {
  base.value++;
}
</script>
