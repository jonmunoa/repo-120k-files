// fichero 14982 -- macros y constantes -- MODIFICADO
#define LIMITE_14982 15182
#define FACTOR_14982 4

int aplicar_limite14982(int valor) {
    if (valor > LIMITE_14982) return LIMITE_14982;
    return valor * FACTOR_14982;
}
