// fichero 33810 -- macros y constantes
#define LIMITE_33810 33910
#define FACTOR_33810 1

int aplicar_limite33810(int valor) {
    if (valor > LIMITE_33810) return LIMITE_33810;
    return valor * FACTOR_33810;
}
