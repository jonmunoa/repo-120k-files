<template>
  <section class="panel-10561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10561");
const base = ref(10561);
const total = computed(() => base.value * 2);

function incrementar10561() {
  base.value++;
}
</script>
