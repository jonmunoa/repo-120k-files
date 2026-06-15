// fichero 40317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40317;

Registro40317 crear_registro40317(int id) {
    Registro40317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
