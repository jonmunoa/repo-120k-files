// fichero 33814 -- macros y constantes
#define LIMITE_33814 33914
#define FACTOR_33814 5

int aplicar_limite33814(int valor) {
    if (valor > LIMITE_33814) return LIMITE_33814;
    return valor * FACTOR_33814;
}
