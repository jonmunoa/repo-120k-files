// fichero 33814 -- macros y constantes -- MODIFICADO
#define LIMITE_33814 34014
#define FACTOR_33814 6

int aplicar_limite33814(int valor) {
    if (valor > LIMITE_33814) return LIMITE_33814;
    return valor * FACTOR_33814;
}
