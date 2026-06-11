<template>
  <section class="panel-26637">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26637");
const base = ref(26637);
const total = computed(() => base.value * 2);

function incrementar26637() {
  base.value++;
}
</script>
