<template>
  <section class="panel-22277">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22277");
const base = ref(22277);
const total = computed(() => base.value * 2);

function incrementar22277() {
  base.value++;
}
</script>
