// fichero 23798 -- macros y constantes -- MODIFICADO
#define LIMITE_23798 23998
#define FACTOR_23798 5

int aplicar_limite23798(int valor) {
    if (valor > LIMITE_23798) return LIMITE_23798;
    return valor * FACTOR_23798;
}
