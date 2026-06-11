<template>
  <section class="panel-51037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51037");
const base = ref(51037);
const total = computed(() => base.value * 2);

function incrementar51037() {
  base.value++;
}
</script>
