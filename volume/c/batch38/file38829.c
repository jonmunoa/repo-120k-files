// fichero 38829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38829;

Registro38829 crear_registro38829(int id) {
    Registro38829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
