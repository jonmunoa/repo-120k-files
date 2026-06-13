// fichero 44458 -- macros y constantes
#define LIMITE_44458 44558
#define FACTOR_44458 4

int aplicar_limite44458(int valor) {
    if (valor > LIMITE_44458) return LIMITE_44458;
    return valor * FACTOR_44458;
}
