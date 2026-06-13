// fichero 33202 -- macros y constantes
#define LIMITE_33202 33302
#define FACTOR_33202 3

int aplicar_limite33202(int valor) {
    if (valor > LIMITE_33202) return LIMITE_33202;
    return valor * FACTOR_33202;
}
