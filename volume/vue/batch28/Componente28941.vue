<template>
  <section class="panel-28941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28941");
const base = ref(28941);
const total = computed(() => base.value * 2);

function incrementar28941() {
  base.value++;
}
</script>
