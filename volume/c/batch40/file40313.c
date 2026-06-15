// fichero 40313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40313;

Registro40313 crear_registro40313(int id) {
    Registro40313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
