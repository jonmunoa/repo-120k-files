// fichero 8062 -- macros y constantes
#define LIMITE_8062 8162
#define FACTOR_8062 3

int aplicar_limite8062(int valor) {
    if (valor > LIMITE_8062) return LIMITE_8062;
    return valor * FACTOR_8062;
}
