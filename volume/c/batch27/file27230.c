// fichero 27230 -- macros y constantes -- MODIFICADO
#define LIMITE_27230 27430
#define FACTOR_27230 2

int aplicar_limite27230(int valor) {
    if (valor > LIMITE_27230) return LIMITE_27230;
    return valor * FACTOR_27230;
}
