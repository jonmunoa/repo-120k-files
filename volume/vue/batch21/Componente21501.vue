<template>
  <section class="panel-21501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21501");
const base = ref(21501);
const total = computed(() => base.value * 2);

function incrementar21501() {
  base.value++;
}
</script>
