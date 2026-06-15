// fichero 31361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31361;

Registro31361 crear_registro31361(int id) {
    Registro31361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
