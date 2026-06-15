// fichero 12361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12361;

Registro12361 crear_registro12361(int id) {
    Registro12361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
