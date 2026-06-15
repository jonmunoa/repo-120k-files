// fichero 31290 -- macros y constantes -- MODIFICADO
#define LIMITE_31290 31490
#define FACTOR_31290 2

int aplicar_limite31290(int valor) {
    if (valor > LIMITE_31290) return LIMITE_31290;
    return valor * FACTOR_31290;
}
