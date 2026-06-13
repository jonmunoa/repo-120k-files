// fichero 50398 -- macros y constantes
#define LIMITE_50398 50498
#define FACTOR_50398 4

int aplicar_limite50398(int valor) {
    if (valor > LIMITE_50398) return LIMITE_50398;
    return valor * FACTOR_50398;
}
