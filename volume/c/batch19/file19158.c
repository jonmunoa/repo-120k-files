// fichero 19158 -- macros y constantes -- MODIFICADO
#define LIMITE_19158 19358
#define FACTOR_19158 5

int aplicar_limite19158(int valor) {
    if (valor > LIMITE_19158) return LIMITE_19158;
    return valor * FACTOR_19158;
}
