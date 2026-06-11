<template>
  <section class="panel-28537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28537");
const base = ref(28537);
const total = computed(() => base.value * 2);

function incrementar28537() {
  base.value++;
}
</script>
