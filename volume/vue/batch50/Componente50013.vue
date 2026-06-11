<template>
  <section class="panel-50013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50013");
const base = ref(50013);
const total = computed(() => base.value * 2);

function incrementar50013() {
  base.value++;
}
</script>
