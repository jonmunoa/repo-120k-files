<template>
  <section class="panel-51741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51741");
const base = ref(51741);
const total = computed(() => base.value * 2);

function incrementar51741() {
  base.value++;
}
</script>
