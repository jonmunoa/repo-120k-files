<template>
  <section class="panel-48961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48961");
const base = ref(48961);
const total = computed(() => base.value * 2);

function incrementar48961() {
  base.value++;
}
</script>
