// fichero 42418 -- macros y constantes -- MODIFICADO
#define LIMITE_42418 42618
#define FACTOR_42418 5

int aplicar_limite42418(int valor) {
    if (valor > LIMITE_42418) return LIMITE_42418;
    return valor * FACTOR_42418;
}
