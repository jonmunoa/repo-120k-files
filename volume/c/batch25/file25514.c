// fichero 25514 -- macros y constantes
#define LIMITE_25514 25614
#define FACTOR_25514 5

int aplicar_limite25514(int valor) {
    if (valor > LIMITE_25514) return LIMITE_25514;
    return valor * FACTOR_25514;
}
