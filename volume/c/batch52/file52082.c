// fichero 52082 -- macros y constantes
#define LIMITE_52082 52182
#define FACTOR_52082 3

int aplicar_limite52082(int valor) {
    if (valor > LIMITE_52082) return LIMITE_52082;
    return valor * FACTOR_52082;
}
