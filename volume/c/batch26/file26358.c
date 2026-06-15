// fichero 26358 -- macros y constantes -- MODIFICADO
#define LIMITE_26358 26558
#define FACTOR_26358 5

int aplicar_limite26358(int valor) {
    if (valor > LIMITE_26358) return LIMITE_26358;
    return valor * FACTOR_26358;
}
