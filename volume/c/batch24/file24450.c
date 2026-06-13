// fichero 24450 -- macros y constantes
#define LIMITE_24450 24550
#define FACTOR_24450 1

int aplicar_limite24450(int valor) {
    if (valor > LIMITE_24450) return LIMITE_24450;
    return valor * FACTOR_24450;
}
