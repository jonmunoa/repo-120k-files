<template>
  <section class="panel-28829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28829");
const base = ref(28829);
const total = computed(() => base.value * 2);

function incrementar28829() {
  base.value++;
}
</script>
