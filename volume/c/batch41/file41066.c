// fichero 41066 -- macros y constantes
#define LIMITE_41066 41166
#define FACTOR_41066 2

int aplicar_limite41066(int valor) {
    if (valor > LIMITE_41066) return LIMITE_41066;
    return valor * FACTOR_41066;
}
