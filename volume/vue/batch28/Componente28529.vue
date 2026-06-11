<template>
  <section class="panel-28529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28529");
const base = ref(28529);
const total = computed(() => base.value * 2);

function incrementar28529() {
  base.value++;
}
</script>
