<template>
  <section class="panel-18829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18829");
const base = ref(18829);
const total = computed(() => base.value * 2);

function incrementar18829() {
  base.value++;
}
</script>
