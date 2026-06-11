<template>
  <section class="panel-18561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18561");
const base = ref(18561);
const total = computed(() => base.value * 2);

function incrementar18561() {
  base.value++;
}
</script>
