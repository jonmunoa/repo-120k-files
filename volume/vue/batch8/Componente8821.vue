<template>
  <section class="panel-8821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8821");
const base = ref(8821);
const total = computed(() => base.value * 2);

function incrementar8821() {
  base.value++;
}
</script>
