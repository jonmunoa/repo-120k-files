// fichero 42678 -- macros y constantes -- MODIFICADO
#define LIMITE_42678 42878
#define FACTOR_42678 5

int aplicar_limite42678(int valor) {
    if (valor > LIMITE_42678) return LIMITE_42678;
    return valor * FACTOR_42678;
}
