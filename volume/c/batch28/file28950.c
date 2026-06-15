// fichero 28950 -- macros y constantes -- MODIFICADO
#define LIMITE_28950 29150
#define FACTOR_28950 2

int aplicar_limite28950(int valor) {
    if (valor > LIMITE_28950) return LIMITE_28950;
    return valor * FACTOR_28950;
}
