// fichero 47906 -- macros y constantes -- MODIFICADO
#define LIMITE_47906 48106
#define FACTOR_47906 3

int aplicar_limite47906(int valor) {
    if (valor > LIMITE_47906) return LIMITE_47906;
    return valor * FACTOR_47906;
}
