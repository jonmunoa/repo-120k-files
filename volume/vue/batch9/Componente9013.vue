<template>
  <section class="panel-9013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9013");
const base = ref(9013);
const total = computed(() => base.value * 2);

function incrementar9013() {
  base.value++;
}
</script>
