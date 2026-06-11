<template>
  <section class="panel-12293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12293");
const base = ref(12293);
const total = computed(() => base.value * 2);

function incrementar12293() {
  base.value++;
}
</script>
