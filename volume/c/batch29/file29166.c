// fichero 29166 -- macros y constantes -- MODIFICADO
#define LIMITE_29166 29366
#define FACTOR_29166 3

int aplicar_limite29166(int valor) {
    if (valor > LIMITE_29166) return LIMITE_29166;
    return valor * FACTOR_29166;
}
