<template>
  <section class="panel-961">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 961");
const base = ref(961);
const total = computed(() => base.value * 2);

function incrementar961() {
  base.value++;
}
</script>
