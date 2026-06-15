// fichero 24361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24361;

Registro24361 crear_registro24361(int id) {
    Registro24361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
