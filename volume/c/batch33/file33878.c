// fichero 33878 -- macros y constantes -- MODIFICADO
#define LIMITE_33878 34078
#define FACTOR_33878 5

int aplicar_limite33878(int valor) {
    if (valor > LIMITE_33878) return LIMITE_33878;
    return valor * FACTOR_33878;
}
