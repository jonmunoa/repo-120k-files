// fichero 41570 -- macros y constantes -- MODIFICADO
#define LIMITE_41570 41770
#define FACTOR_41570 2

int aplicar_limite41570(int valor) {
    if (valor > LIMITE_41570) return LIMITE_41570;
    return valor * FACTOR_41570;
}
