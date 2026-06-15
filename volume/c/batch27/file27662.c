// fichero 27662 -- macros y constantes -- MODIFICADO
#define LIMITE_27662 27862
#define FACTOR_27662 4

int aplicar_limite27662(int valor) {
    if (valor > LIMITE_27662) return LIMITE_27662;
    return valor * FACTOR_27662;
}
