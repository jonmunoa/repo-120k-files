// fichero 16982 -- macros y constantes -- MODIFICADO
#define LIMITE_16982 17182
#define FACTOR_16982 4

int aplicar_limite16982(int valor) {
    if (valor > LIMITE_16982) return LIMITE_16982;
    return valor * FACTOR_16982;
}
