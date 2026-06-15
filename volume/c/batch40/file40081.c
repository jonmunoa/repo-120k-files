// fichero 40081 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40081;

Registro40081 crear_registro40081(int id) {
    Registro40081 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
