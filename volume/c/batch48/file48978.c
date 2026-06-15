// fichero 48978 -- macros y constantes -- MODIFICADO
#define LIMITE_48978 49178
#define FACTOR_48978 5

int aplicar_limite48978(int valor) {
    if (valor > LIMITE_48978) return LIMITE_48978;
    return valor * FACTOR_48978;
}
