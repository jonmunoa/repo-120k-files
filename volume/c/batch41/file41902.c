// fichero 41902 -- macros y constantes -- MODIFICADO
#define LIMITE_41902 42102
#define FACTOR_41902 4

int aplicar_limite41902(int valor) {
    if (valor > LIMITE_41902) return LIMITE_41902;
    return valor * FACTOR_41902;
}
