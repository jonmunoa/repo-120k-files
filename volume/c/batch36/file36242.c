// fichero 36242 -- macros y constantes -- MODIFICADO
#define LIMITE_36242 36442
#define FACTOR_36242 4

int aplicar_limite36242(int valor) {
    if (valor > LIMITE_36242) return LIMITE_36242;
    return valor * FACTOR_36242;
}
