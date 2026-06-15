// fichero 4265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4265;

Registro4265 crear_registro4265(int id) {
    Registro4265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
