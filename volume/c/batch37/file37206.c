// fichero 37206 -- macros y constantes
#define LIMITE_37206 37306
#define FACTOR_37206 2

int aplicar_limite37206(int valor) {
    if (valor > LIMITE_37206) return LIMITE_37206;
    return valor * FACTOR_37206;
}
