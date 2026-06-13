// fichero 33458 -- macros y constantes
#define LIMITE_33458 33558
#define FACTOR_33458 4

int aplicar_limite33458(int valor) {
    if (valor > LIMITE_33458) return LIMITE_33458;
    return valor * FACTOR_33458;
}
