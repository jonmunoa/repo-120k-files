<template>
  <section class="panel-28825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28825");
const base = ref(28825);
const total = computed(() => base.value * 2);

function incrementar28825() {
  base.value++;
}
</script>
