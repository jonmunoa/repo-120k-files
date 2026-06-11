<template>
  <section class="panel-27501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27501");
const base = ref(27501);
const total = computed(() => base.value * 2);

function incrementar27501() {
  base.value++;
}
</script>
