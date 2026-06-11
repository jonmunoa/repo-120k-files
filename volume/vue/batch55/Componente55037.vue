<template>
  <section class="panel-55037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55037");
const base = ref(55037);
const total = computed(() => base.value * 2);

function incrementar55037() {
  base.value++;
}
</script>
