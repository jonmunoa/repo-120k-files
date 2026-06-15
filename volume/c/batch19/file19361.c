// fichero 19361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19361;

Registro19361 crear_registro19361(int id) {
    Registro19361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
