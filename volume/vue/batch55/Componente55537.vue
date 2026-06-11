<template>
  <section class="panel-55537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55537");
const base = ref(55537);
const total = computed(() => base.value * 2);

function incrementar55537() {
  base.value++;
}
</script>
