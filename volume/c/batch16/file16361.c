// fichero 16361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16361;

Registro16361 crear_registro16361(int id) {
    Registro16361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
