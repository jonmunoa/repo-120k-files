<template>
  <section class="panel-53441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53441");
const base = ref(53441);
const total = computed(() => base.value * 2);

function incrementar53441() {
  base.value++;
}
</script>
