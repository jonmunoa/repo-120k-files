<template>
  <section class="panel-25145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25145");
const base = ref(25145);
const total = computed(() => base.value * 2);

function incrementar25145() {
  base.value++;
}
</script>
