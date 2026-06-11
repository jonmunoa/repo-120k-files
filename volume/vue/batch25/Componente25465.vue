<template>
  <section class="panel-25465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25465");
const base = ref(25465);
const total = computed(() => base.value * 2);

function incrementar25465() {
  base.value++;
}
</script>
