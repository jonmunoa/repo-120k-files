<template>
  <section class="panel-28101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28101");
const base = ref(28101);
const total = computed(() => base.value * 2);

function incrementar28101() {
  base.value++;
}
</script>
