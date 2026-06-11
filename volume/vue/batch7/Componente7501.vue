<template>
  <section class="panel-7501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7501");
const base = ref(7501);
const total = computed(() => base.value * 2);

function incrementar7501() {
  base.value++;
}
</script>
