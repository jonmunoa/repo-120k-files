// fichero 44654 -- macros y constantes -- MODIFICADO
#define LIMITE_44654 44854
#define FACTOR_44654 6

int aplicar_limite44654(int valor) {
    if (valor > LIMITE_44654) return LIMITE_44654;
    return valor * FACTOR_44654;
}
