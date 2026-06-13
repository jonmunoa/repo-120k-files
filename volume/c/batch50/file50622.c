// fichero 50622 -- macros y constantes
#define LIMITE_50622 50722
#define FACTOR_50622 3

int aplicar_limite50622(int valor) {
    if (valor > LIMITE_50622) return LIMITE_50622;
    return valor * FACTOR_50622;
}
