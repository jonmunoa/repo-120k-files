// fichero 8246 -- macros y constantes -- MODIFICADO
#define LIMITE_8246 8446
#define FACTOR_8246 3

int aplicar_limite8246(int valor) {
    if (valor > LIMITE_8246) return LIMITE_8246;
    return valor * FACTOR_8246;
}
