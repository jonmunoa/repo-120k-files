<template>
  <section class="panel-26293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26293");
const base = ref(26293);
const total = computed(() => base.value * 2);

function incrementar26293() {
  base.value++;
}
</script>
