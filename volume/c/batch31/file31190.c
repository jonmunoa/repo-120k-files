// fichero 31190 -- macros y constantes -- MODIFICADO
#define LIMITE_31190 31390
#define FACTOR_31190 2

int aplicar_limite31190(int valor) {
    if (valor > LIMITE_31190) return LIMITE_31190;
    return valor * FACTOR_31190;
}
