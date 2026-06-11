<template>
  <section class="panel-34873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34873");
const base = ref(34873);
const total = computed(() => base.value * 2);

function incrementar34873() {
  base.value++;
}
</script>
