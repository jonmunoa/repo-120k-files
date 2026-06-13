// fichero 33290 -- macros y constantes
#define LIMITE_33290 33390
#define FACTOR_33290 1

int aplicar_limite33290(int valor) {
    if (valor > LIMITE_33290) return LIMITE_33290;
    return valor * FACTOR_33290;
}
