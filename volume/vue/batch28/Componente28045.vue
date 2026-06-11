<template>
  <section class="panel-28045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28045");
const base = ref(28045);
const total = computed(() => base.value * 2);

function incrementar28045() {
  base.value++;
}
</script>
