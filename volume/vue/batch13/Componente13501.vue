<template>
  <section class="panel-13501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13501");
const base = ref(13501);
const total = computed(() => base.value * 2);

function incrementar13501() {
  base.value++;
}
</script>
