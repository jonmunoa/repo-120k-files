// fichero 294 -- macros y constantes -- MODIFICADO
#define LIMITE_294 494
#define FACTOR_294 6

int aplicar_limite294(int valor) {
    if (valor > LIMITE_294) return LIMITE_294;
    return valor * FACTOR_294;
}
