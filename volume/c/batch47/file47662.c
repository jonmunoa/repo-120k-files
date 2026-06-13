// fichero 47662 -- macros y constantes
#define LIMITE_47662 47762
#define FACTOR_47662 3

int aplicar_limite47662(int valor) {
    if (valor > LIMITE_47662) return LIMITE_47662;
    return valor * FACTOR_47662;
}
