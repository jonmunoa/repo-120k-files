// fichero 47242 -- macros y constantes -- MODIFICADO
#define LIMITE_47242 47442
#define FACTOR_47242 4

int aplicar_limite47242(int valor) {
    if (valor > LIMITE_47242) return LIMITE_47242;
    return valor * FACTOR_47242;
}
