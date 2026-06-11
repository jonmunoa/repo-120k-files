<template>
  <section class="panel-21113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21113");
const base = ref(21113);
const total = computed(() => base.value * 2);

function incrementar21113() {
  base.value++;
}
</script>
