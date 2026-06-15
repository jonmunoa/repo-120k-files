// fichero 30777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30777;

Registro30777 crear_registro30777(int id) {
    Registro30777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
