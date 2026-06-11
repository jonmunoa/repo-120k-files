<template>
  <section class="panel-50917">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50917");
const base = ref(50917);
const total = computed(() => base.value * 2);

function incrementar50917() {
  base.value++;
}
</script>
