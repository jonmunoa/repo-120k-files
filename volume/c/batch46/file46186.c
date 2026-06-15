// fichero 46186 -- macros y constantes -- MODIFICADO
#define LIMITE_46186 46386
#define FACTOR_46186 3

int aplicar_limite46186(int valor) {
    if (valor > LIMITE_46186) return LIMITE_46186;
    return valor * FACTOR_46186;
}
