// fichero 33798 -- macros y constantes
#define LIMITE_33798 33898
#define FACTOR_33798 4

int aplicar_limite33798(int valor) {
    if (valor > LIMITE_33798) return LIMITE_33798;
    return valor * FACTOR_33798;
}
