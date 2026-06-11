<template>
  <section class="panel-51501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51501");
const base = ref(51501);
const total = computed(() => base.value * 2);

function incrementar51501() {
  base.value++;
}
</script>
