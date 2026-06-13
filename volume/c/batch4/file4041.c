// fichero 4041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4041;

Registro4041 crear_registro4041(int id) {
    Registro4041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4041(Registro4041 r) {
    return r.valor + r.id;
}
