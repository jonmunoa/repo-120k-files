// fichero 29246 -- macros y constantes -- MODIFICADO
#define LIMITE_29246 29446
#define FACTOR_29246 3

int aplicar_limite29246(int valor) {
    if (valor > LIMITE_29246) return LIMITE_29246;
    return valor * FACTOR_29246;
}
