<template>
  <section class="panel-8009">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8009");
const base = ref(8009);
const total = computed(() => base.value * 2);

function incrementar8009() {
  base.value++;
}
</script>
