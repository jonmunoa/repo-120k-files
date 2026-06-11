<template>
  <section class="panel-11873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11873");
const base = ref(11873);
const total = computed(() => base.value * 2);

function incrementar11873() {
  base.value++;
}
</script>
