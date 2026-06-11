<template>
  <section class="panel-34825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34825");
const base = ref(34825);
const total = computed(() => base.value * 2);

function incrementar34825() {
  base.value++;
}
</script>
