// fichero 22018 -- macros y constantes -- MODIFICADO
#define LIMITE_22018 22218
#define FACTOR_22018 5

int aplicar_limite22018(int valor) {
    if (valor > LIMITE_22018) return LIMITE_22018;
    return valor * FACTOR_22018;
}
