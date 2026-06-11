<template>
  <section class="panel-28969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28969");
const base = ref(28969);
const total = computed(() => base.value * 2);

function incrementar28969() {
  base.value++;
}
</script>
