<template>
  <section class="panel-20289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20289");
const base = ref(20289);
const total = computed(() => base.value * 2);

function incrementar20289() {
  base.value++;
}
</script>
