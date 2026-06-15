// fichero 24906 -- macros y constantes -- MODIFICADO
#define LIMITE_24906 25106
#define FACTOR_24906 3

int aplicar_limite24906(int valor) {
    if (valor > LIMITE_24906) return LIMITE_24906;
    return valor * FACTOR_24906;
}
