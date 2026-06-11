<template>
  <section class="panel-5609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5609");
const base = ref(5609);
const total = computed(() => base.value * 2);

function incrementar5609() {
  base.value++;
}
</script>
