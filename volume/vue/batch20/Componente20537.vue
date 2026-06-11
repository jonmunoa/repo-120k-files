<template>
  <section class="panel-20537">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20537");
const base = ref(20537);
const total = computed(() => base.value * 2);

function incrementar20537() {
  base.value++;
}
</script>
