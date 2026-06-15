// fichero 16386 -- macros y constantes -- MODIFICADO
#define LIMITE_16386 16586
#define FACTOR_16386 3

int aplicar_limite16386(int valor) {
    if (valor > LIMITE_16386) return LIMITE_16386;
    return valor * FACTOR_16386;
}
