// fichero 44802 -- macros y constantes
#define LIMITE_44802 44902
#define FACTOR_44802 3

int aplicar_limite44802(int valor) {
    if (valor > LIMITE_44802) return LIMITE_44802;
    return valor * FACTOR_44802;
}
