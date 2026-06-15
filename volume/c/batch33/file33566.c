// fichero 33566 -- macros y constantes -- MODIFICADO
#define LIMITE_33566 33766
#define FACTOR_33566 3

int aplicar_limite33566(int valor) {
    if (valor > LIMITE_33566) return LIMITE_33566;
    return valor * FACTOR_33566;
}
