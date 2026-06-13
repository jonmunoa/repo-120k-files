// fichero 20906 -- macros y constantes
#define LIMITE_20906 21006
#define FACTOR_20906 2

int aplicar_limite20906(int valor) {
    if (valor > LIMITE_20906) return LIMITE_20906;
    return valor * FACTOR_20906;
}
