<template>
  <section class="panel-50477">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50477");
const base = ref(50477);
const total = computed(() => base.value * 2);

function incrementar50477() {
  base.value++;
}
</script>
