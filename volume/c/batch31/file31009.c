// fichero 31009 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31009;

Registro31009 crear_registro31009(int id) {
    Registro31009 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31009(Registro31009 r) {
    return r.valor + r.id;
}
