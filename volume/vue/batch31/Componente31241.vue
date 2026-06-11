<template>
  <section class="panel-31241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31241");
const base = ref(31241);
const total = computed(() => base.value * 2);

function incrementar31241() {
  base.value++;
}
</script>
