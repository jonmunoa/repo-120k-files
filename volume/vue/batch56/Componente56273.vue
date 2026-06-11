<template>
  <section class="panel-56273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56273");
const base = ref(56273);
const total = computed(() => base.value * 2);

function incrementar56273() {
  base.value++;
}
</script>
