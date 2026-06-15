// fichero 47690 -- macros y constantes -- MODIFICADO
#define LIMITE_47690 47890
#define FACTOR_47690 2

int aplicar_limite47690(int valor) {
    if (valor > LIMITE_47690) return LIMITE_47690;
    return valor * FACTOR_47690;
}
