// fichero 51906 -- macros y constantes
#define LIMITE_51906 52006
#define FACTOR_51906 2

int aplicar_limite51906(int valor) {
    if (valor > LIMITE_51906) return LIMITE_51906;
    return valor * FACTOR_51906;
}
