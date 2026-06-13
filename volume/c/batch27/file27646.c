// fichero 27646 -- macros y constantes
#define LIMITE_27646 27746
#define FACTOR_27646 2

int aplicar_limite27646(int valor) {
    if (valor > LIMITE_27646) return LIMITE_27646;
    return valor * FACTOR_27646;
}
