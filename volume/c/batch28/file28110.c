// fichero 28110 -- macros y constantes -- MODIFICADO
#define LIMITE_28110 28310
#define FACTOR_28110 2

int aplicar_limite28110(int valor) {
    if (valor > LIMITE_28110) return LIMITE_28110;
    return valor * FACTOR_28110;
}
