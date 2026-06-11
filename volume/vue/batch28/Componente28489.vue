<template>
  <section class="panel-28489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28489");
const base = ref(28489);
const total = computed(() => base.value * 2);

function incrementar28489() {
  base.value++;
}
</script>
