// fichero 15950 -- macros y constantes -- MODIFICADO
#define LIMITE_15950 16150
#define FACTOR_15950 2

int aplicar_limite15950(int valor) {
    if (valor > LIMITE_15950) return LIMITE_15950;
    return valor * FACTOR_15950;
}
