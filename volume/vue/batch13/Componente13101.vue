<template>
  <section class="panel-13101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13101");
const base = ref(13101);
const total = computed(() => base.value * 2);

function incrementar13101() {
  base.value++;
}
</script>
