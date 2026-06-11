<template>
  <section class="panel-47501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47501");
const base = ref(47501);
const total = computed(() => base.value * 2);

function incrementar47501() {
  base.value++;
}
</script>
