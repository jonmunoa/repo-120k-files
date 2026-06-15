// fichero 37361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37361;

Registro37361 crear_registro37361(int id) {
    Registro37361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
