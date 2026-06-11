<template>
  <section class="panel-8325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8325");
const base = ref(8325);
const total = computed(() => base.value * 2);

function incrementar8325() {
  base.value++;
}
</script>
