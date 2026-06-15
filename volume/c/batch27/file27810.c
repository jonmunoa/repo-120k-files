// fichero 27810 -- macros y constantes -- MODIFICADO
#define LIMITE_27810 28010
#define FACTOR_27810 2

int aplicar_limite27810(int valor) {
    if (valor > LIMITE_27810) return LIMITE_27810;
    return valor * FACTOR_27810;
}
