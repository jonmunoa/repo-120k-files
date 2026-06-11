<template>
  <section class="panel-47961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47961");
const base = ref(47961);
const total = computed(() => base.value * 2);

function incrementar47961() {
  base.value++;
}
</script>
