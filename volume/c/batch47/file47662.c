// fichero 47662 -- macros y constantes -- MODIFICADO
#define LIMITE_47662 47862
#define FACTOR_47662 4

int aplicar_limite47662(int valor) {
    if (valor > LIMITE_47662) return LIMITE_47662;
    return valor * FACTOR_47662;
}
