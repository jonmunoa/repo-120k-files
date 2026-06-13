// fichero 48962 -- macros y constantes
#define LIMITE_48962 49062
#define FACTOR_48962 3

int aplicar_limite48962(int valor) {
    if (valor > LIMITE_48962) return LIMITE_48962;
    return valor * FACTOR_48962;
}
