// fichero 38010 -- macros y constantes
#define LIMITE_38010 38110
#define FACTOR_38010 1

int aplicar_limite38010(int valor) {
    if (valor > LIMITE_38010) return LIMITE_38010;
    return valor * FACTOR_38010;
}
