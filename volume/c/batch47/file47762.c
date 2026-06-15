// fichero 47762 -- macros y constantes -- MODIFICADO
#define LIMITE_47762 47962
#define FACTOR_47762 4

int aplicar_limite47762(int valor) {
    if (valor > LIMITE_47762) return LIMITE_47762;
    return valor * FACTOR_47762;
}
