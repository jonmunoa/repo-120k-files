// fichero 44802 -- macros y constantes -- MODIFICADO
#define LIMITE_44802 45002
#define FACTOR_44802 4

int aplicar_limite44802(int valor) {
    if (valor > LIMITE_44802) return LIMITE_44802;
    return valor * FACTOR_44802;
}
