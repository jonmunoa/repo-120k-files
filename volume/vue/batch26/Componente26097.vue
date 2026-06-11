<template>
  <section class="panel-26097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26097");
const base = ref(26097);
const total = computed(() => base.value * 2);

function incrementar26097() {
  base.value++;
}
</script>
