// fichero 28950 -- macros y constantes
#define LIMITE_28950 29050
#define FACTOR_28950 1

int aplicar_limite28950(int valor) {
    if (valor > LIMITE_28950) return LIMITE_28950;
    return valor * FACTOR_28950;
}
