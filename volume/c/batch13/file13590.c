// fichero 13590 -- macros y constantes -- MODIFICADO
#define LIMITE_13590 13790
#define FACTOR_13590 2

int aplicar_limite13590(int valor) {
    if (valor > LIMITE_13590) return LIMITE_13590;
    return valor * FACTOR_13590;
}
