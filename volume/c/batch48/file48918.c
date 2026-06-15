// fichero 48918 -- macros y constantes -- MODIFICADO
#define LIMITE_48918 49118
#define FACTOR_48918 5

int aplicar_limite48918(int valor) {
    if (valor > LIMITE_48918) return LIMITE_48918;
    return valor * FACTOR_48918;
}
