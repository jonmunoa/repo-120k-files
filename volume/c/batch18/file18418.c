// fichero 18418 -- macros y constantes -- MODIFICADO
#define LIMITE_18418 18618
#define FACTOR_18418 5

int aplicar_limite18418(int valor) {
    if (valor > LIMITE_18418) return LIMITE_18418;
    return valor * FACTOR_18418;
}
