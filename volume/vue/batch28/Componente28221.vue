<template>
  <section class="panel-28221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28221");
const base = ref(28221);
const total = computed(() => base.value * 2);

function incrementar28221() {
  base.value++;
}
</script>
