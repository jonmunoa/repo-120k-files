<template>
  <section class="panel-5709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5709");
const base = ref(5709);
const total = computed(() => base.value * 2);

function incrementar5709() {
  base.value++;
}
</script>
