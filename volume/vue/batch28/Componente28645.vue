<template>
  <section class="panel-28645">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28645");
const base = ref(28645);
const total = computed(() => base.value * 2);

function incrementar28645() {
  base.value++;
}
</script>
