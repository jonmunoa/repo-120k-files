<template>
  <section class="panel-9789">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9789");
const base = ref(9789);
const total = computed(() => base.value * 2);

function incrementar9789() {
  base.value++;
}
</script>
