// fichero 52274 -- macros y constantes
#define LIMITE_52274 52374
#define FACTOR_52274 5

int aplicar_limite52274(int valor) {
    if (valor > LIMITE_52274) return LIMITE_52274;
    return valor * FACTOR_52274;
}
