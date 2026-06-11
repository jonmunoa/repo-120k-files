<template>
  <section class="panel-28261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28261");
const base = ref(28261);
const total = computed(() => base.value * 2);

function incrementar28261() {
  base.value++;
}
</script>
