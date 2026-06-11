<template>
  <section class="panel-22873">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22873");
const base = ref(22873);
const total = computed(() => base.value * 2);

function incrementar22873() {
  base.value++;
}
</script>
