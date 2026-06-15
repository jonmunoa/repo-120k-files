// fichero 47330 -- macros y constantes -- MODIFICADO
#define LIMITE_47330 47530
#define FACTOR_47330 2

int aplicar_limite47330(int valor) {
    if (valor > LIMITE_47330) return LIMITE_47330;
    return valor * FACTOR_47330;
}
