// fichero 24062 -- macros y constantes
#define LIMITE_24062 24162
#define FACTOR_24062 3

int aplicar_limite24062(int valor) {
    if (valor > LIMITE_24062) return LIMITE_24062;
    return valor * FACTOR_24062;
}
