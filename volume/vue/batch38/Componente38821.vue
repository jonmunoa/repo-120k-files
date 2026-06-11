<template>
  <section class="panel-38821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38821");
const base = ref(38821);
const total = computed(() => base.value * 2);

function incrementar38821() {
  base.value++;
}
</script>
