<template>
  <section class="panel-8185">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8185");
const base = ref(8185);
const total = computed(() => base.value * 2);

function incrementar8185() {
  base.value++;
}
</script>
