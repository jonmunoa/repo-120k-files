// fichero 41294 -- macros y constantes -- MODIFICADO
#define LIMITE_41294 41494
#define FACTOR_41294 6

int aplicar_limite41294(int valor) {
    if (valor > LIMITE_41294) return LIMITE_41294;
    return valor * FACTOR_41294;
}
