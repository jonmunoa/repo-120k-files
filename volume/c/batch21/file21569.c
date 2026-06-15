// fichero 21569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21569;

Registro21569 crear_registro21569(int id) {
    Registro21569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
