<template>
  <section class="panel-3501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3501");
const base = ref(3501);
const total = computed(() => base.value * 2);

function incrementar3501() {
  base.value++;
}
</script>
