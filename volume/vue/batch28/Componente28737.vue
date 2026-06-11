<template>
  <section class="panel-28737">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28737");
const base = ref(28737);
const total = computed(() => base.value * 2);

function incrementar28737() {
  base.value++;
}
</script>
