<template>
  <section class="panel-27829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27829");
const base = ref(27829);
const total = computed(() => base.value * 2);

function incrementar27829() {
  base.value++;
}
</script>
