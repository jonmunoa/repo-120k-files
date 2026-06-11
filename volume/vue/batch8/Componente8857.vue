<template>
  <section class="panel-8857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8857");
const base = ref(8857);
const total = computed(() => base.value * 2);

function incrementar8857() {
  base.value++;
}
</script>
