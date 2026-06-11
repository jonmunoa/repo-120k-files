<template>
  <section class="panel-28985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28985");
const base = ref(28985);
const total = computed(() => base.value * 2);

function incrementar28985() {
  base.value++;
}
</script>
