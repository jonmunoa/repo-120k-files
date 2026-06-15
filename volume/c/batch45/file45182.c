// fichero 45182 -- macros y constantes -- MODIFICADO
#define LIMITE_45182 45382
#define FACTOR_45182 4

int aplicar_limite45182(int valor) {
    if (valor > LIMITE_45182) return LIMITE_45182;
    return valor * FACTOR_45182;
}
