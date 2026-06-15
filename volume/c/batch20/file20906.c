// fichero 20906 -- macros y constantes -- MODIFICADO
#define LIMITE_20906 21106
#define FACTOR_20906 3

int aplicar_limite20906(int valor) {
    if (valor > LIMITE_20906) return LIMITE_20906;
    return valor * FACTOR_20906;
}
