<template>
  <section class="panel-13829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13829");
const base = ref(13829);
const total = computed(() => base.value * 2);

function incrementar13829() {
  base.value++;
}
</script>
