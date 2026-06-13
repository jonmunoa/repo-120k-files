// fichero 29950 -- macros y constantes
#define LIMITE_29950 30050
#define FACTOR_29950 1

int aplicar_limite29950(int valor) {
    if (valor > LIMITE_29950) return LIMITE_29950;
    return valor * FACTOR_29950;
}
