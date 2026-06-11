<template>
  <section class="panel-28217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28217");
const base = ref(28217);
const total = computed(() => base.value * 2);

function incrementar28217() {
  base.value++;
}
</script>
