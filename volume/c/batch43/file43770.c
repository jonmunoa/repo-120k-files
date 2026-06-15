// fichero 43770 -- macros y constantes -- MODIFICADO
#define LIMITE_43770 43970
#define FACTOR_43770 2

int aplicar_limite43770(int valor) {
    if (valor > LIMITE_43770) return LIMITE_43770;
    return valor * FACTOR_43770;
}
