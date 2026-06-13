// fichero 48546 -- macros y constantes
#define LIMITE_48546 48646
#define FACTOR_48546 2

int aplicar_limite48546(int valor) {
    if (valor > LIMITE_48546) return LIMITE_48546;
    return valor * FACTOR_48546;
}
