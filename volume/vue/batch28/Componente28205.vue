<template>
  <section class="panel-28205">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28205");
const base = ref(28205);
const total = computed(() => base.value * 2);

function incrementar28205() {
  base.value++;
}
</script>
