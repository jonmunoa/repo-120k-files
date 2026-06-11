<template>
  <section class="panel-34329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34329");
const base = ref(34329);
const total = computed(() => base.value * 2);

function incrementar34329() {
  base.value++;
}
</script>
