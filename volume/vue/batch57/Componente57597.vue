<template>
  <section class="panel-57597">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57597");
const base = ref(57597);
const total = computed(() => base.value * 2);

function incrementar57597() {
  base.value++;
}
</script>
