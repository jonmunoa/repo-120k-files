<template>
  <section class="panel-11669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11669");
const base = ref(11669);
const total = computed(() => base.value * 2);

function incrementar11669() {
  base.value++;
}
</script>
