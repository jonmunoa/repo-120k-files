<template>
  <section class="panel-11273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11273");
const base = ref(11273);
const total = computed(() => base.value * 2);

function incrementar11273() {
  base.value++;
}
</script>
