<template>
  <section class="panel-28713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28713");
const base = ref(28713);
const total = computed(() => base.value * 2);

function incrementar28713() {
  base.value++;
}
</script>
