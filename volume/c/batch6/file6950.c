// fichero 6950 -- macros y constantes -- MODIFICADO
#define LIMITE_6950 7150
#define FACTOR_6950 2

int aplicar_limite6950(int valor) {
    if (valor > LIMITE_6950) return LIMITE_6950;
    return valor * FACTOR_6950;
}
