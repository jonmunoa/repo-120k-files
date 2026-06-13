// fichero 10669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10669;

Registro10669 crear_registro10669(int id) {
    Registro10669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10669(Registro10669 r) {
    return r.valor + r.id;
}
