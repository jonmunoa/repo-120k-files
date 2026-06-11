<template>
  <section class="panel-4273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4273");
const base = ref(4273);
const total = computed(() => base.value * 2);

function incrementar4273() {
  base.value++;
}
</script>
