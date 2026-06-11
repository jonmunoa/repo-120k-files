<template>
  <section class="panel-2961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2961");
const base = ref(2961);
const total = computed(() => base.value * 2);

function incrementar2961() {
  base.value++;
}
</script>
