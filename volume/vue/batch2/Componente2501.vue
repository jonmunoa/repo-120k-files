<template>
  <section class="panel-2501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2501");
const base = ref(2501);
const total = computed(() => base.value * 2);

function incrementar2501() {
  base.value++;
}
</script>
