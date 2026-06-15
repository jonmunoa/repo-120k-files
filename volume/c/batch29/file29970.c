// fichero 29970 -- macros y constantes -- MODIFICADO
#define LIMITE_29970 30170
#define FACTOR_29970 2

int aplicar_limite29970(int valor) {
    if (valor > LIMITE_29970) return LIMITE_29970;
    return valor * FACTOR_29970;
}
