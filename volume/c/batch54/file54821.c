// fichero 54821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54821;

Registro54821 crear_registro54821(int id) {
    Registro54821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54821(Registro54821 r) {
    return r.valor + r.id;
}
