// fichero 52190 -- macros y constantes
#define LIMITE_52190 52290
#define FACTOR_52190 1

int aplicar_limite52190(int valor) {
    if (valor > LIMITE_52190) return LIMITE_52190;
    return valor * FACTOR_52190;
}
