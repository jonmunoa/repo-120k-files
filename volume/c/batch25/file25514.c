// fichero 25514 -- macros y constantes -- MODIFICADO
#define LIMITE_25514 25714
#define FACTOR_25514 6

int aplicar_limite25514(int valor) {
    if (valor > LIMITE_25514) return LIMITE_25514;
    return valor * FACTOR_25514;
}
