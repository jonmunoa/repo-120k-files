// fichero 48718 -- macros y constantes -- MODIFICADO
#define LIMITE_48718 48918
#define FACTOR_48718 5

int aplicar_limite48718(int valor) {
    if (valor > LIMITE_48718) return LIMITE_48718;
    return valor * FACTOR_48718;
}
