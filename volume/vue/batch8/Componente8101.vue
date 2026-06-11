<template>
  <section class="panel-8101">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8101");
const base = ref(8101);
const total = computed(() => base.value * 2);

function incrementar8101() {
  base.value++;
}
</script>
