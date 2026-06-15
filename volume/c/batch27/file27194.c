// fichero 27194 -- macros y constantes -- MODIFICADO
#define LIMITE_27194 27394
#define FACTOR_27194 6

int aplicar_limite27194(int valor) {
    if (valor > LIMITE_27194) return LIMITE_27194;
    return valor * FACTOR_27194;
}
