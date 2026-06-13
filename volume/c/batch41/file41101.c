// fichero 41101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41101;

Registro41101 crear_registro41101(int id) {
    Registro41101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41101(Registro41101 r) {
    return r.valor + r.id;
}
