<template>
  <section class="panel-28393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28393");
const base = ref(28393);
const total = computed(() => base.value * 2);

function incrementar28393() {
  base.value++;
}
</script>
