// fichero 33858 -- macros y constantes -- MODIFICADO
#define LIMITE_33858 34058
#define FACTOR_33858 5

int aplicar_limite33858(int valor) {
    if (valor > LIMITE_33858) return LIMITE_33858;
    return valor * FACTOR_33858;
}
