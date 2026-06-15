// fichero 28186 -- macros y constantes -- MODIFICADO
#define LIMITE_28186 28386
#define FACTOR_28186 3

int aplicar_limite28186(int valor) {
    if (valor > LIMITE_28186) return LIMITE_28186;
    return valor * FACTOR_28186;
}
