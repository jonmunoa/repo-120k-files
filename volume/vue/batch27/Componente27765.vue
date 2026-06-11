<template>
  <section class="panel-27765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27765");
const base = ref(27765);
const total = computed(() => base.value * 2);

function incrementar27765() {
  base.value++;
}
</script>
