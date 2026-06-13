// fichero 33090 -- macros y constantes
#define LIMITE_33090 33190
#define FACTOR_33090 1

int aplicar_limite33090(int valor) {
    if (valor > LIMITE_33090) return LIMITE_33090;
    return valor * FACTOR_33090;
}
