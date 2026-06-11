<template>
  <section class="panel-28001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28001");
const base = ref(28001);
const total = computed(() => base.value * 2);

function incrementar28001() {
  base.value++;
}
</script>
