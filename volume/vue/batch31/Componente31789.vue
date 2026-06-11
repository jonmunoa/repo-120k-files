<template>
  <section class="panel-31789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31789");
const base = ref(31789);
const total = computed(() => base.value * 2);

function incrementar31789() {
  base.value++;
}
</script>
