// fichero 19350 -- macros y constantes -- MODIFICADO
#define LIMITE_19350 19550
#define FACTOR_19350 2

int aplicar_limite19350(int valor) {
    if (valor > LIMITE_19350) return LIMITE_19350;
    return valor * FACTOR_19350;
}
