// fichero 48546 -- macros y constantes -- MODIFICADO
#define LIMITE_48546 48746
#define FACTOR_48546 3

int aplicar_limite48546(int valor) {
    if (valor > LIMITE_48546) return LIMITE_48546;
    return valor * FACTOR_48546;
}
