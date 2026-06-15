// fichero 41361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41361;

Registro41361 crear_registro41361(int id) {
    Registro41361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
