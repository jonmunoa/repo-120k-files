// fichero 42454 -- macros y constantes -- MODIFICADO
#define LIMITE_42454 42654
#define FACTOR_42454 6

int aplicar_limite42454(int valor) {
    if (valor > LIMITE_42454) return LIMITE_42454;
    return valor * FACTOR_42454;
}
