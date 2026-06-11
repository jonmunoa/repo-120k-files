<template>
  <section class="panel-17273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17273");
const base = ref(17273);
const total = computed(() => base.value * 2);

function incrementar17273() {
  base.value++;
}
</script>
