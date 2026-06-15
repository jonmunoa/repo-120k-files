// fichero 35489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35489;

Registro35489 crear_registro35489(int id) {
    Registro35489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
