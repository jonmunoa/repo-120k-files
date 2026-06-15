// fichero 8046 -- macros y constantes -- MODIFICADO
#define LIMITE_8046 8246
#define FACTOR_8046 3

int aplicar_limite8046(int valor) {
    if (valor > LIMITE_8046) return LIMITE_8046;
    return valor * FACTOR_8046;
}
