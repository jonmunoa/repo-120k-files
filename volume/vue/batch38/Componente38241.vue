<template>
  <section class="panel-38241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38241");
const base = ref(38241);
const total = computed(() => base.value * 2);

function incrementar38241() {
  base.value++;
}
</script>
