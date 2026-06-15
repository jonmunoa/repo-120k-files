// fichero 27022 -- macros y constantes -- MODIFICADO
#define LIMITE_27022 27222
#define FACTOR_27022 4

int aplicar_limite27022(int valor) {
    if (valor > LIMITE_27022) return LIMITE_27022;
    return valor * FACTOR_27022;
}
