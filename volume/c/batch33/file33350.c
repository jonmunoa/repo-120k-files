// fichero 33350 -- macros y constantes -- MODIFICADO
#define LIMITE_33350 33550
#define FACTOR_33350 2

int aplicar_limite33350(int valor) {
    if (valor > LIMITE_33350) return LIMITE_33350;
    return valor * FACTOR_33350;
}
