// fichero 46934 -- macros y constantes
#define LIMITE_46934 47034
#define FACTOR_46934 5

int aplicar_limite46934(int valor) {
    if (valor > LIMITE_46934) return LIMITE_46934;
    return valor * FACTOR_46934;
}
