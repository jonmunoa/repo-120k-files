// fichero 46190 -- macros y constantes -- MODIFICADO
#define LIMITE_46190 46390
#define FACTOR_46190 2

int aplicar_limite46190(int valor) {
    if (valor > LIMITE_46190) return LIMITE_46190;
    return valor * FACTOR_46190;
}
