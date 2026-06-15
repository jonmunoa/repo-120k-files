// fichero 27970 -- macros y constantes -- MODIFICADO
#define LIMITE_27970 28170
#define FACTOR_27970 2

int aplicar_limite27970(int valor) {
    if (valor > LIMITE_27970) return LIMITE_27970;
    return valor * FACTOR_27970;
}
