// fichero 27422 -- macros y constantes -- MODIFICADO
#define LIMITE_27422 27622
#define FACTOR_27422 4

int aplicar_limite27422(int valor) {
    if (valor > LIMITE_27422) return LIMITE_27422;
    return valor * FACTOR_27422;
}
