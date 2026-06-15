// fichero 18361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18361;

Registro18361 crear_registro18361(int id) {
    Registro18361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
