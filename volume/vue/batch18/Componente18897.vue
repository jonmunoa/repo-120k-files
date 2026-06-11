<template>
  <section class="panel-18897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18897");
const base = ref(18897);
const total = computed(() => base.value * 2);

function incrementar18897() {
  base.value++;
}
</script>
