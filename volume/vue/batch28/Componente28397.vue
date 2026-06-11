<template>
  <section class="panel-28397">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28397");
const base = ref(28397);
const total = computed(() => base.value * 2);

function incrementar28397() {
  base.value++;
}
</script>
