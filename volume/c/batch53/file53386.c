// fichero 53386 -- macros y constantes
#define LIMITE_53386 53486
#define FACTOR_53386 2

int aplicar_limite53386(int valor) {
    if (valor > LIMITE_53386) return LIMITE_53386;
    return valor * FACTOR_53386;
}
