<template>
  <section class="panel-28185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28185");
const base = ref(28185);
const total = computed(() => base.value * 2);

function incrementar28185() {
  base.value++;
}
</script>
