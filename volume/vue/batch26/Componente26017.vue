<template>
  <section class="panel-26017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26017");
const base = ref(26017);
const total = computed(() => base.value * 2);

function incrementar26017() {
  base.value++;
}
</script>
