// fichero 37758 -- macros y constantes -- MODIFICADO
#define LIMITE_37758 37958
#define FACTOR_37758 5

int aplicar_limite37758(int valor) {
    if (valor > LIMITE_37758) return LIMITE_37758;
    return valor * FACTOR_37758;
}
