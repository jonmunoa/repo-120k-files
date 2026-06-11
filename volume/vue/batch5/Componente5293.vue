<template>
  <section class="panel-5293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5293");
const base = ref(5293);
const total = computed(() => base.value * 2);

function incrementar5293() {
  base.value++;
}
</script>
