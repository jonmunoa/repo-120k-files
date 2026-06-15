// fichero 32458 -- macros y constantes -- MODIFICADO
#define LIMITE_32458 32658
#define FACTOR_32458 5

int aplicar_limite32458(int valor) {
    if (valor > LIMITE_32458) return LIMITE_32458;
    return valor * FACTOR_32458;
}
