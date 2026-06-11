<template>
  <section class="panel-28993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28993");
const base = ref(28993);
const total = computed(() => base.value * 2);

function incrementar28993() {
  base.value++;
}
</script>
