<template>
  <section class="panel-8273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8273");
const base = ref(8273);
const total = computed(() => base.value * 2);

function incrementar8273() {
  base.value++;
}
</script>
