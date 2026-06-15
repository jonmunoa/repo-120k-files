// fichero 35461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35461;

Registro35461 crear_registro35461(int id) {
    Registro35461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
