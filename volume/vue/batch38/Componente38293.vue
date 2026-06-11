<template>
  <section class="panel-38293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38293");
const base = ref(38293);
const total = computed(() => base.value * 2);

function incrementar38293() {
  base.value++;
}
</script>
