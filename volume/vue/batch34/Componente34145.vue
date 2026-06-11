<template>
  <section class="panel-34145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34145");
const base = ref(34145);
const total = computed(() => base.value * 2);

function incrementar34145() {
  base.value++;
}
</script>
