// fichero 41066 -- macros y constantes -- MODIFICADO
#define LIMITE_41066 41266
#define FACTOR_41066 3

int aplicar_limite41066(int valor) {
    if (valor > LIMITE_41066) return LIMITE_41066;
    return valor * FACTOR_41066;
}
