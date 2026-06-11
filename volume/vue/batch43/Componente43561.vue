<template>
  <section class="panel-43561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43561");
const base = ref(43561);
const total = computed(() => base.value * 2);

function incrementar43561() {
  base.value++;
}
</script>
