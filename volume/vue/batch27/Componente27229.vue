<template>
  <section class="panel-27229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27229");
const base = ref(27229);
const total = computed(() => base.value * 2);

function incrementar27229() {
  base.value++;
}
</script>
