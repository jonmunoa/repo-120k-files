<template>
  <section class="panel-18157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18157");
const base = ref(18157);
const total = computed(() => base.value * 2);

function incrementar18157() {
  base.value++;
}
</script>
