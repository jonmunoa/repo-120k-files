// fichero 41570 -- macros y constantes
#define LIMITE_41570 41670
#define FACTOR_41570 1

int aplicar_limite41570(int valor) {
    if (valor > LIMITE_41570) return LIMITE_41570;
    return valor * FACTOR_41570;
}
