// fichero 22514 -- macros y constantes
#define LIMITE_22514 22614
#define FACTOR_22514 5

int aplicar_limite22514(int valor) {
    if (valor > LIMITE_22514) return LIMITE_22514;
    return valor * FACTOR_22514;
}
