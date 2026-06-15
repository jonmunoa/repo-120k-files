// fichero 22330 -- macros y constantes -- MODIFICADO
#define LIMITE_22330 22530
#define FACTOR_22330 2

int aplicar_limite22330(int valor) {
    if (valor > LIMITE_22330) return LIMITE_22330;
    return valor * FACTOR_22330;
}
