<template>
  <section class="panel-24501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24501");
const base = ref(24501);
const total = computed(() => base.value * 2);

function incrementar24501() {
  base.value++;
}
</script>
