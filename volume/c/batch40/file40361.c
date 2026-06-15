// fichero 40361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40361;

Registro40361 crear_registro40361(int id) {
    Registro40361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
