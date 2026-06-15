// fichero 20978 -- macros y constantes -- MODIFICADO
#define LIMITE_20978 21178
#define FACTOR_20978 5

int aplicar_limite20978(int valor) {
    if (valor > LIMITE_20978) return LIMITE_20978;
    return valor * FACTOR_20978;
}
