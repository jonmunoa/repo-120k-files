// fichero 33898 -- macros y constantes
#define LIMITE_33898 33998
#define FACTOR_33898 4

int aplicar_limite33898(int valor) {
    if (valor > LIMITE_33898) return LIMITE_33898;
    return valor * FACTOR_33898;
}
