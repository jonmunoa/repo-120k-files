// fichero 33458 -- macros y constantes -- MODIFICADO
#define LIMITE_33458 33658
#define FACTOR_33458 5

int aplicar_limite33458(int valor) {
    if (valor > LIMITE_33458) return LIMITE_33458;
    return valor * FACTOR_33458;
}
