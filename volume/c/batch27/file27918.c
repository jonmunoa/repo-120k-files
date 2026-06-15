// fichero 27918 -- macros y constantes -- MODIFICADO
#define LIMITE_27918 28118
#define FACTOR_27918 5

int aplicar_limite27918(int valor) {
    if (valor > LIMITE_27918) return LIMITE_27918;
    return valor * FACTOR_27918;
}
