<template>
  <section class="panel-28273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28273");
const base = ref(28273);
const total = computed(() => base.value * 2);

function incrementar28273() {
  base.value++;
}
</script>
