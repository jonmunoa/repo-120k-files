// fichero 41294 -- macros y constantes
#define LIMITE_41294 41394
#define FACTOR_41294 5

int aplicar_limite41294(int valor) {
    if (valor > LIMITE_41294) return LIMITE_41294;
    return valor * FACTOR_41294;
}
