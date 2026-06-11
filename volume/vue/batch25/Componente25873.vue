<template>
  <section class="panel-25873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25873");
const base = ref(25873);
const total = computed(() => base.value * 2);

function incrementar25873() {
  base.value++;
}
</script>
