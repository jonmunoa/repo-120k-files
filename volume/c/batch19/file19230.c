// fichero 19230 -- macros y constantes -- MODIFICADO
#define LIMITE_19230 19430
#define FACTOR_19230 2

int aplicar_limite19230(int valor) {
    if (valor > LIMITE_19230) return LIMITE_19230;
    return valor * FACTOR_19230;
}
