// fichero 24110 -- macros y constantes
#define LIMITE_24110 24210
#define FACTOR_24110 1

int aplicar_limite24110(int valor) {
    if (valor > LIMITE_24110) return LIMITE_24110;
    return valor * FACTOR_24110;
}
