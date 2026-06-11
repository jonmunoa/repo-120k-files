<template>
  <section class="panel-22961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22961");
const base = ref(22961);
const total = computed(() => base.value * 2);

function incrementar22961() {
  base.value++;
}
</script>
