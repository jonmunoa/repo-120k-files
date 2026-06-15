// fichero 38902 -- macros y constantes -- MODIFICADO
#define LIMITE_38902 39102
#define FACTOR_38902 4

int aplicar_limite38902(int valor) {
    if (valor > LIMITE_38902) return LIMITE_38902;
    return valor * FACTOR_38902;
}
