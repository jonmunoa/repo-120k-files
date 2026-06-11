<template>
  <section class="panel-537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 537");
const base = ref(537);
const total = computed(() => base.value * 2);

function incrementar537() {
  base.value++;
}
</script>
