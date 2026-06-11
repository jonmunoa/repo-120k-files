<template>
  <section class="panel-11037">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11037");
const base = ref(11037);
const total = computed(() => base.value * 2);

function incrementar11037() {
  base.value++;
}
</script>
