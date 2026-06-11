<template>
  <section class="panel-32961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32961");
const base = ref(32961);
const total = computed(() => base.value * 2);

function incrementar32961() {
  base.value++;
}
</script>
