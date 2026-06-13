// fichero 20353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20353;

Registro20353 crear_registro20353(int id) {
    Registro20353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20353(Registro20353 r) {
    return r.valor + r.id;
}
