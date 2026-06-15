// fichero 33146 -- macros y constantes -- MODIFICADO
#define LIMITE_33146 33346
#define FACTOR_33146 3

int aplicar_limite33146(int valor) {
    if (valor > LIMITE_33146) return LIMITE_33146;
    return valor * FACTOR_33146;
}
