<template>
  <section class="panel-13873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13873");
const base = ref(13873);
const total = computed(() => base.value * 2);

function incrementar13873() {
  base.value++;
}
</script>
