// fichero 37110 -- macros y constantes -- MODIFICADO
#define LIMITE_37110 37310
#define FACTOR_37110 2

int aplicar_limite37110(int valor) {
    if (valor > LIMITE_37110) return LIMITE_37110;
    return valor * FACTOR_37110;
}
