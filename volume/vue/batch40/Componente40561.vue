<template>
  <section class="panel-40561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40561");
const base = ref(40561);
const total = computed(() => base.value * 2);

function incrementar40561() {
  base.value++;
}
</script>
