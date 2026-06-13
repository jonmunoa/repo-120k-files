// fichero 5690 -- macros y constantes
#define LIMITE_5690 5790
#define FACTOR_5690 1

int aplicar_limite5690(int valor) {
    if (valor > LIMITE_5690) return LIMITE_5690;
    return valor * FACTOR_5690;
}
