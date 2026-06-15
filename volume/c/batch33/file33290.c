// fichero 33290 -- macros y constantes -- MODIFICADO
#define LIMITE_33290 33490
#define FACTOR_33290 2

int aplicar_limite33290(int valor) {
    if (valor > LIMITE_33290) return LIMITE_33290;
    return valor * FACTOR_33290;
}
