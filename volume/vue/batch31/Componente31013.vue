<template>
  <section class="panel-31013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31013");
const base = ref(31013);
const total = computed(() => base.value * 2);

function incrementar31013() {
  base.value++;
}
</script>
