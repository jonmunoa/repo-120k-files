// fichero 9361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9361;

Registro9361 crear_registro9361(int id) {
    Registro9361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
