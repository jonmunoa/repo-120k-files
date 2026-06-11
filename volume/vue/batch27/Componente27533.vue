<template>
  <section class="panel-27533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27533");
const base = ref(27533);
const total = computed(() => base.value * 2);

function incrementar27533() {
  base.value++;
}
</script>
