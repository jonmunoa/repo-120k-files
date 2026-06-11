<template>
  <section class="panel-13825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13825");
const base = ref(13825);
const total = computed(() => base.value * 2);

function incrementar13825() {
  base.value++;
}
</script>
