// fichero 27202 -- macros y constantes -- MODIFICADO
#define LIMITE_27202 27402
#define FACTOR_27202 4

int aplicar_limite27202(int valor) {
    if (valor > LIMITE_27202) return LIMITE_27202;
    return valor * FACTOR_27202;
}
