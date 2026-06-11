<template>
  <section class="panel-7037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7037");
const base = ref(7037);
const total = computed(() => base.value * 2);

function incrementar7037() {
  base.value++;
}
</script>
