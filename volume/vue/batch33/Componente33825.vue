<template>
  <section class="panel-33825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33825");
const base = ref(33825);
const total = computed(() => base.value * 2);

function incrementar33825() {
  base.value++;
}
</script>
