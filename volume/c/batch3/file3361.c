// fichero 3361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3361;

Registro3361 crear_registro3361(int id) {
    Registro3361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
