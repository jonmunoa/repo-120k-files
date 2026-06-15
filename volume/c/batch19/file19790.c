// fichero 19790 -- macros y constantes -- MODIFICADO
#define LIMITE_19790 19990
#define FACTOR_19790 2

int aplicar_limite19790(int valor) {
    if (valor > LIMITE_19790) return LIMITE_19790;
    return valor * FACTOR_19790;
}
