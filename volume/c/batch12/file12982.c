// fichero 12982 -- macros y constantes -- MODIFICADO
#define LIMITE_12982 13182
#define FACTOR_12982 4

int aplicar_limite12982(int valor) {
    if (valor > LIMITE_12982) return LIMITE_12982;
    return valor * FACTOR_12982;
}
