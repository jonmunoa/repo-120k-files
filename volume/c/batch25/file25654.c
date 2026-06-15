// fichero 25654 -- macros y constantes -- MODIFICADO
#define LIMITE_25654 25854
#define FACTOR_25654 6

int aplicar_limite25654(int valor) {
    if (valor > LIMITE_25654) return LIMITE_25654;
    return valor * FACTOR_25654;
}
