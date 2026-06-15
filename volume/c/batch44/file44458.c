// fichero 44458 -- macros y constantes -- MODIFICADO
#define LIMITE_44458 44658
#define FACTOR_44458 5

int aplicar_limite44458(int valor) {
    if (valor > LIMITE_44458) return LIMITE_44458;
    return valor * FACTOR_44458;
}
