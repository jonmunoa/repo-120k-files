<template>
  <section class="panel-28797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28797");
const base = ref(28797);
const total = computed(() => base.value * 2);

function incrementar28797() {
  base.value++;
}
</script>
