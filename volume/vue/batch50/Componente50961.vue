<template>
  <section class="panel-50961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50961");
const base = ref(50961);
const total = computed(() => base.value * 2);

function incrementar50961() {
  base.value++;
}
</script>
