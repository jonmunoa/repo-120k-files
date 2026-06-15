// fichero 31085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31085;

Registro31085 crear_registro31085(int id) {
    Registro31085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
